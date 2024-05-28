/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/


#include "WuBiLiBiLiWebSocket.h"
#include "WebSocketsModule.h"
#include "WuBiLiBiLiApi.h"
#include "BiLiBiLiSubsystem.h"
#include <string>
#include <sstream> //处理包用到的
#include "zlib.h" //处理服务器返回的消息，解压用到的

//以下头文件，仅为单独打包插件错误包含。如果不单独打包插件，无需包含
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h" //Kismet




UWuBiLiBiLiWebSocket::UWuBiLiBiLiWebSocket()
{
	WebSockets = nullptr;
	GameInstance = nullptr;
	UE_LOG(LogClass, Log, TEXT("bilibiliWebSocket构造"));
	//UKismetSystemLibrary::PrintString(this, FString("bilibiliWebSocket构造"));
}


UWuBiLiBiLiWebSocket::~UWuBiLiBiLiWebSocket()
{
	if (WebSockets) {
		if (WebSockets->IsConnected()) { //如果和服务器链接
			WebSockets->Close(); //关闭链接
		}
	}
	UE_LOG(LogClass, Log , TEXT("bilibiliWebSocket析构"));
}



void UWuBiLiBiLiWebSocket::createWebSocket(const FString& url, const FString& body, const FString& gameid, const UGameInstance* gameInstance, CallBack callback)
{

	if (!gameInstance) {
		UE_LOG(LogClass, Error, TEXT("错误，gameInstance参数为空d"));
		return;
	}
	GameId_xintiao = gameid;
	Body = body;
	GameInstance = gameInstance;
	
	if (!FModuleManager::Get().IsModuleLoaded("WebSockets")) {
		FModuleManager::Get().LoadModule("WebSockets");
	}
	WebSockets = FWebSocketsModule::Get().CreateWebSocket(url, TEXT("ws")); //创建webSocket链接

	WebSockets->OnClosed().AddLambda([=](int32  StatusCode, const FString& Reason, bool  bWasClean) {
		UE_LOG(LogClass, Log, TEXT("WebSocket关闭,Code:%d。消息：%s"), StatusCode, *Reason);
		/*
		if (StatusCode == 1006) {
			WebSockets->Connect();
		}
		*/
		});

	WebSockets->OnConnected().AddLambda([this]() {
		UE_LOG(LogClass, Log, TEXT("WebSocket链接成功"));
		UKismetSystemLibrary::PrintString(this,FString(TEXT("WebSocket链接成功")));
		if(!GameInstance)
		{
			return;
		}
		GameInstance->GetSubsystem<UBiLiBiLiSubsystem>()->LinkSuccessEvent.Broadcast();
		
		std::stringstream ss;
		TArray<unsigned char> buffer;
		buffer.Init(0, 4);
		
		std::string stdbody= TCHAR_TO_UTF8(*Body);

		//写入验证字符串长度
		getBytesByInt(buffer, (int)(stdbody.length() + 16));

		ss << buffer[0] << buffer[1] << buffer[2] << buffer[3];
		getBytesByShort(buffer, (short)16);
		ss << buffer[0] << buffer[1];

		//有人说已经有 protover = 3 了, 总之把protover 2用到死为止
		getBytesByShort(buffer, (short)2);
		ss << buffer[0] << buffer[1];

		// 7是加入房间的获取弹幕(也就是鉴权包)，2是心跳包防止强制掉线
		getBytesByInt(buffer, (int)7);
		ss << buffer[0] << buffer[1] << buffer[2] << buffer[3];



		getBytesByInt(buffer, (int)1);
		ss << buffer[0] << buffer[1] << buffer[2] << buffer[3];

		//最后将json字符串也写入进去
		ss << stdbody;
		//最后生成房间包，并将包发送给服务器
		std::string roomPack = ss.str();
		FString rooPackStr(roomPack.c_str());
		
		
		// 此处的'\0'不能包括进去
		if (!WebSockets->IsConnected())
		{
			// Don't send if we're not connected.
			UE_LOG(LogTemp,Error, TEXT("发送鉴权包时，WebSocket已关闭"));
			//CallbackError(ERROR_WEBSOCKET_CONNECT);
			return;
		}
		WebSockets->Send(roomPack.data(), roomPack.size(), true);

		if (heartBeatTimerHandle.IsValid()) { //如果是重连的话，就移除老心跳计时器
			GameInstance->GetWorld()->GetTimerManager().ClearTimer(heartBeatTimerHandle);
		}
		//每30秒发送一次心跳包
		GameInstance->GetWorld()->GetTimerManager().SetTimer(heartBeatTimerHandle, this, &UWuBiLiBiLiWebSocket::heartBeat, 20, true, -1);

		});



	//WebSockets->OnConnected().AddUObject(this,&WuBiLiBiLiWebSocket::OnConnected);


	WebSockets->OnConnectionError().AddLambda([](const FString& Error) {
		UE_LOG(LogClass, Error, TEXT("WebSocket链接失败。错误信息：%s"), *Error);
		});
	/*
	WebSockets->OnMessage().AddLambda([](const FString& MessageString) {
		UE_LOG(LogClass, Log, TEXT("收到来自服务器的消息：%s"), *MessageString);
		});
		*/
#if ((ENGINE_MAJOR_VERSION == 5)&&( ENGINE_MINOR_VERSION>3))
	WebSockets->OnRawMessage().AddLambda([=,this](const void* Data, SIZE_T  Size, SIZE_T  BytesRemaining) {
#else
	WebSockets->OnRawMessage().AddLambda([=](const void* Data, SIZE_T  Size, SIZE_T  BytesRemaining) {
#endif
		
		if(!GameInstance)
		{
			return;
		}
		if(!Data)
		{
			UE_LOG(LogClass, Error, TEXT("非B站错误码，没有返回值。请检查网络连接"));
			auto BiLiBiLiSubsystem = GameInstance->GetSubsystem<UBiLiBiLiSubsystem>();
			BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, TEXT("非B站错误码，没有返回值。请检查网络连接"));
			return;
		}
		if (Size != 26)
		{
		unsigned char* buffer = (unsigned char*)Data;
		//读取包的长度
		int packetLength = toInt(buffer, 0);

		int headerLength = toShort(buffer, 4);
		//处理类型,2为gzip数据包，弹幕，礼物，进入直播间的都是这种数据
		int version = toShort(buffer, 6);
		int action = toInt(buffer, 8);
		int parameter = toInt(buffer, 12);

			if (packetLength > 20)
		{
				// version == 2 表示数据使用了zlib压缩
				if (version == 2)
				{
					UE_LOG(LogClass, Log, TEXT("服务器消息使用了zlib压缩"));
			
					uLong unzip_size = UNZIP_BUFF_SIZE;
					if (uncompress(unzipBuffer, &unzip_size, buffer + 16, packetLength - 16) == 0)
					{
						//此处，解压出来的所有数据被称之为大包，里面的每条弹幕信息被称为子包
						//有时候是多个子包放在一起发送过来的，要对整个包解剖处理，初始位置肯定从0开始了
						uLong allsize = 0;
						//当要处理位置跟解压出来的大小一致时，那就是整个大包都处理完了
						while (allsize < unzip_size)
						{
						//读取子包的长度，并记录
							int packetLength2 = toInt(unzipBuffer, allsize + 0);
							int headerLength2 = toShort(unzipBuffer, allsize + 4);
							int version2 = toShort(unzipBuffer, allsize + 6);
							int action2 = toInt(unzipBuffer, allsize + 8);
							int parameter2 = toInt(unzipBuffer, allsize + 12);

							//提取字符串
							int end = packetLength2 + allsize;
							char c = unzipBuffer[end];
							unzipBuffer[end] = '\0';
							std::string data = (char*)(unzipBuffer + allsize + 16);
							unzipBuffer[end] = c;

							// 然后就是处理数据了 ...
							//CallbackMessage(data);
							//UTF8_TO_TCHAR(data.data());
							callback(true, UTF8_TO_TCHAR(data.data()));
							//处理完这个子包后记得将大包处理位置进行偏移
							allsize += packetLength2;


						}
					}
				}
				else
				{
					UE_LOG(LogClass, Log, TEXT("服务器消息没用使用zlib压缩"));
					memcpy(unzipBuffer, buffer + 16, packetLength - 16);
					unzipBuffer[packetLength - 16] = '\0';
					callback(true, UTF8_TO_TCHAR((const char*)unzipBuffer));
					//CallbackMessage((const char*)unzipBuffer);
				}
			}
		}
		
		});

}

void UWuBiLiBiLiWebSocket::LinkBServer()
{
	if (WebSockets) {
		WebSockets->Connect();//开始链接
	}
}

void UWuBiLiBiLiWebSocket::End()
{
	if (WebSockets) {
		WebSockets->Close();//停止链接

	}
	if (heartBeatTimerHandle.IsValid()) { //如果有心跳定时器。那么就移除他
		GameInstance->GetWorld()->GetTimerManager().ClearTimer(heartBeatTimerHandle);
	}
}

bool UWuBiLiBiLiWebSocket::islink()
{
	return heartBeatTimerHandle.IsValid(); //如果已经启动了心跳，代表已经链接了
}

/*
void WuBiLiBiLiWebSocket::OnConnected()
{
	//GameInstance->GetWorld()->GetTimerManager().SetTimer(heartBeatTimerHandle, this, &WuBiLiBiLiWebSocket::heartBeat, 30, true, -1.0);
}
*/

void UWuBiLiBiLiWebSocket::heartBeat()
{
	UBiLiBiLiSubsystem* BISubsystem1 = GameInstance?GameInstance->GetSubsystem<UBiLiBiLiSubsystem>():nullptr;
	//TSharedPtr<WuBiLiBiLiApi> bapi1 = BISubsystem->bapi;
	UWuBiLiBiLiApi* bapi1 = BISubsystem1->bapi;
	//这里的Lambda函数。设计上，只有成功获得B站服务器的消息，才能被回调。
	//如果isSuccess为true。就是B站服务器没有返回错误信息。如果是false，B站服务器就返回了错误信息
	//鉴于大多数错误，都无法走到心跳逻辑这里，在http鉴权的时候就错误了。所以根本走不到这里。
	//所以这个错误通常是因为网络问题，导致的一分钟内B站服务器没有得到心跳。自动关闭项目，导致房间过期。
	//所以我在这里的处理是直接断开链接。
#if ((ENGINE_MAJOR_VERSION == 5)&&( ENGINE_MINOR_VERSION>3))
		bapi1->sendheartBeat(GameId_xintiao, [=,this](bool isSuccess, FString message) {
#else
		bapi1->sendheartBeat(GameId_xintiao, [=](bool isSuccess, FString message) {
#endif
		if (!WebSockets) {
			UE_LOG(LogClass, Error, TEXT("WebSocketsIsNull"));

			return;
		}
	
		UBiLiBiLiSubsystem* BISubsystem =GameInstance?GameInstance->GetSubsystem<UBiLiBiLiSubsystem>():nullptr;
		if(!BISubsystem)
		{
			return;
		}
		if (isSuccess) {
			UE_LOG(LogClass, Log, TEXT("Http心跳包收到服务器消息：%s"), *message);

			//如果Http心跳包成功获得服务器返回，而且没有错误的消息。那么就发送WebSocket心跳包。这样也能保证如果断开就重连
			//一定要等到Http心跳包成功。而且没有错误，才执行这步的原因是。B站那边Http因为没有收到心跳包，超时关闭后，WebSocket还可以正常链接。
			//所以才在这里等Http心跳包成功在执行WebSocket的步骤
			
				if (WebSockets->IsConnected()) { //如果和服务器链接
					//WebSockets->Send(Body); //发送消息

					//心跳包
					static char heartBeatData[16] = { 0x00, 0x00, 0x00, 0x10,
												  0x00, 0x10,
												  0x00, 0x01,
												  0x00, 0x00, 0x00, 0x02,
												  0x00, 0x00, 0x00, 0x01 };
					WebSockets->Send(heartBeatData, sizeof(heartBeatData), true);
					UE_LOG(LogClass, Log, TEXT("WebSockte心跳包发送到服务"));
				}else {
					WebSockets->Connect();//尝试重连
					UE_LOG(LogClass, Error, TEXT("WebSockte心跳包发送到服务器失败，原因：没有和服务器链接,已自动尝试重连"));
				}
			
		}
		else {
			BISubsystem->DisconnectWebSocketEvent.Broadcast(message); //发送断开链接的事件，好让他们自己实现重新鉴权并链接
			UE_LOG(LogClass, Error, TEXT("Http心跳包错误。链接已断开，请尝试手动重连，错误信息：%s"), *message);
			GameInstance->GetWorld()->GetTimerManager().ClearTimer(heartBeatTimerHandle);
		}
		});
}

void UWuBiLiBiLiWebSocket::getBytesByInt(TArray<unsigned char>& buffer, int value)
{
	buffer[0] = (unsigned char)(value >> 24);
	buffer[1] = (unsigned char)(value >> 16);
	buffer[2] = (unsigned char)(value >> 8);
	buffer[3] = (unsigned char)value;
}

void UWuBiLiBiLiWebSocket::getBytesByShort(TArray<unsigned char>& buffer, short value)
{
	buffer[0] = (unsigned char)(value >> 8);
	buffer[1] = (unsigned char)value;
}

int UWuBiLiBiLiWebSocket::toInt(unsigned char* buffer, int index)
{
	return (((int)buffer[index] << 24) | ((int)buffer[index + 1] << 16) | ((int)buffer[index + 2] << 8) | (int)buffer[index + 3]);
}

int UWuBiLiBiLiWebSocket::toShort(unsigned char* buffer, int index)
{
	return ((int)buffer[index] << 8) | (int)buffer[index + 1];
}
