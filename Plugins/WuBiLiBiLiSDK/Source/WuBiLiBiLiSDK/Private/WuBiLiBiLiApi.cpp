/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/


#include "WuBiLiBiLiApi.h"
#include "BiLiBiLiSubsystem.h"
#include "JsonObjectWrapper.h"
#include "Dom/JsonObject.h"
#include "Misc/DateTime.h"
#include "Misc/Base64.h"
//#include "Misc/SecureHash.h"
//#include "CryptoHelperBPLibrary.h"
#include "WuCrypto.h"
#include "Kismet/KismetSystemLibrary.h" //Kismet



UWuBiLiBiLiApi::UWuBiLiBiLiApi(): GameInstance(nullptr), BiLiBiLiSubsystem(nullptr)
{
}

/*
UWuBiLiBiLiApi::UWuBiLiBiLiApi(UGameInstance* gameInstance)
{
	GameInstance = gameInstance;
	BiLiBiLiSubsystem = GameInstance->GetSubsystem<UBiLiBiLiSubsystem>();
	UE_LOG(LogClass, Log, TEXT("HTTP通信初始化完成(构造)"));
}
*/

UWuBiLiBiLiApi::~UWuBiLiBiLiApi()
{
	UE_LOG(LogClass, Log, TEXT("HTTP通信卸载（析构）"));
}

void UWuBiLiBiLiApi::init(UGameInstance* gameInstance)
{
	if(!gameInstance)
	{
		UE_LOG(LogClass, Error, TEXT("UWuBiLiBiLiApi::init: gameInstance Is Null"));
		UE_LOG(LogClass, Log, TEXT("HTTP通信初始化失败(构造)"));
		UKismetSystemLibrary::PrintString(this, FString(TEXT("HTTP通信初始化失败(构造)")));
		return;
	}
	GameInstance = gameInstance;
	BiLiBiLiSubsystem = GameInstance->GetSubsystem<UBiLiBiLiSubsystem>();
	if(!BiLiBiLiSubsystem)
	{
		UE_LOG(LogClass, Error, TEXT("UWuBiLiBiLiApi::init: BiLiBiLiSubsystem Is Null"));
		UE_LOG(LogClass, Log, TEXT("HTTP通信初始化失败(构造)"));
		UKismetSystemLibrary::PrintString(this, FString(TEXT("HTTP通信初始化失败(构造)")));
		return;
	}
	UE_LOG(LogClass, Log, TEXT("HTTP通信初始化完成(构造)"));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("HTTP通信初始化完成(构造)")));
}




void UWuBiLiBiLiApi::getWebSocketData(CallBack callback)
{
	UE_LOG(LogClass, Log, TEXT("开始获取长链信息"));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("开始获取长链信息")));
	if (!GameInstance) {
		//callback(false,TEXT("Game Instance Is Null"));
		UE_LOG(LogClass, Error, TEXT("Game Instance Is Null"));
		return;
	}
	if(!BiLiBiLiSubsystem)
	{
		UE_LOG(LogClass, Error, TEXT("BiLiBiLiSubsystem Is Null"));
		return;
	}

	FJsonObjectWrapper data;
	if(!data.JsonObject)
	{
		UE_LOG(LogClass, Error, TEXT("错误。getWebSocketData的Json没有创建成功"));
		return;
	}
	data.JsonObject->SetStringField(TEXT("code"), BiLiBiLiSubsystem->Code);
	//data.JsonObject->SetStringField(TEXT("app_id"), BiLiBiLiSubsystem->AppId);
	//data.JsonObject->SetStringField(TEXT("app_id"), BiLiBiLiSubsystem->AppId);
	data.JsonObject->SetNumberField(TEXT("app_id"), BiLiBiLiSubsystem->AppId);

	FString datastr;
	data.JsonObjectToString(datastr);

	sendHttpRequest( TEXT("https://live-open.biliapi.com/v2/app/start"), datastr, callback);
	UE_LOG(LogClass, Log, TEXT("获取长链信息的Http请求发送完成"));
	//callback(false, TEXT("Call back Http请求发送完成"));
}

void UWuBiLiBiLiApi::sendheartBeat(const FString& GameID, CallBack callback)
{
	FJsonObjectWrapper data;
	if(!data.JsonObject)
	{
		UE_LOG(LogClass, Error, TEXT("错误。sendheartBeat的Json没有创建成功"));
		return;
	}
	data.JsonObject->SetStringField(TEXT("game_id"), GameID);
	FString datastr;
	data.JsonObjectToString(datastr);
	UE_LOG(LogClass, Log, TEXT("Http项目心跳包发送到服务器,data:%s"), *datastr);

	sendHttpRequest(TEXT("https://live-open.biliapi.com/v2/app/heartbeat"), datastr, callback);

}

void UWuBiLiBiLiApi::sendEnd(const FString& GameID, const int64& APPID, CallBack callback)
{
	FJsonObjectWrapper data;
	if(!data.JsonObject)
	{
		UE_LOG(LogClass, Error, TEXT("错误。sendEnd的Json没有创建成功"));
		return;
	}
	data.JsonObject->SetStringField(TEXT("game_id"), GameID);
	//data.JsonObject->SetStringField(TEXT("app_id"), APPID);
	data.JsonObject->SetNumberField(TEXT("app_id"), APPID);
	FString datastr;
	data.JsonObjectToString(datastr);
	UE_LOG(LogClass, Log, TEXT("关闭项目请求发送到服务器,data:%s"), *datastr);
	sendHttpRequest(TEXT("https://live-open.biliapi.com/v2/app/end"), datastr, callback);

}




void UWuBiLiBiLiApi::sendHttpRequest(FString url, FString Data, CallBack callback)
{
	if (!GameInstance) {
		if (callback) {
			callback(false, TEXT("Game Instance Is Null"));
		}
		UE_LOG(LogClass, Error, TEXT("Game Instance Is Null"));
		return;
	}
	if(!BiLiBiLiSubsystem)
	{
		UE_LOG(LogClass, Error, TEXT("BiLiBiLiSubsystem Is Null"));
		return;
	}


	TSharedPtr<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
	if (!HttpRequest) {
		//callback(false, TEXT("创建Http请求失败"));
		UE_LOG(LogClass, Error, TEXT("创建Http请求失败"));
		UKismetSystemLibrary::PrintString(this, FString(TEXT("创建Http请求失败")));
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, "创建Http请求失败");
		return;
	}

	HttpRequest->SetURL(url);
	HttpRequest->SetVerb(TEXT("POST"));

	//获取当前UNIX
	int64 UTCUnix = FDateTime::UtcNow().ToUnixTimestamp();
	FString UTCUnixStr = FString::Printf(TEXT("%lld"), UTCUnix);
	//int64 Unix = FDateTime::Now().ToUnixTimestamp();
	//FString UnixStr = FString::Printf(TEXT("%lld"), Unix);
	//------------计算签名--------------
	//第一步，取得需要计算签命的字符串
	//需要计算签名的头名称和头数据
	TMap<FString, FString> keyValuePair;
	keyValuePair.Add(TEXT("x-bili-accesskeyid"), BiLiBiLiSubsystem->AccessKeyId);
	keyValuePair.Add(TEXT("x-bili-content-md5"), FMD5::HashAnsiString(*Data));
	keyValuePair.Add(TEXT("x-bili-signature-method"), TEXT("HMAC-SHA256"));
	keyValuePair.Add(TEXT("x-bili-signature-nonce"), FGuid::NewGuid().ToString());
	keyValuePair.Add(TEXT("x-bili-signature-version"), TEXT("1.0"));
	keyValuePair.Add(TEXT("x-bili-timestamp"), UTCUnixStr);

	//UE_LOG(LogClass, Log, TEXT("data字符串：%s|||Md5值（官方）:%s;;;Md5值（插件）:%s"), *Data ,*FMD5::HashAnsiString(*Data), *datamd5);

	FString keyValuePairStr;
	for (auto a :keyValuePair) {
		HttpRequest->SetHeader(a.Key, a.Value); //计算签命的头数据也需要添加到头
		if (keyValuePairStr.Len() == 0) {
			keyValuePairStr += (a.Key + ":" + a.Value);
		}
		else {
			keyValuePairStr += ("\n"+a.Key + ":" + a.Value);
		}
	}

	//UE_LOG(LogClass, Log, TEXT("需要计算签名的String:%s"), *keyValuePairStr);

	//第二步，用密钥计算签名
	FString oldAuthorization;
	WuCrypto::HMACString(keyValuePairStr, BiLiBiLiSubsystem->AccessKeySecret, oldAuthorization);

	FString Authorization = oldAuthorization.ToLower();

	//------添加其他头--------
	HttpRequest->SetHeader(TEXT("Authorization"), Authorization); //把签名添加到头
	HttpRequest->SetHeader(TEXT("Accept"), TEXT("application/json"));
	HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	HttpRequest->SetContentAsString(Data);


	RequestMap.Add(HttpRequest, callback);
	//HttpRequest->ON
	HttpRequest->OnProcessRequestComplete().BindUObject(this,& UWuBiLiBiLiApi::ReceivedMessage);
	
	if (!HttpRequest->ProcessRequest()) {
		//callback(false, TEXT("非B站错误码，Http链接启动错误"));
		UE_LOG(LogClass, Error, TEXT("非B站错误码，Http链接启动错误"));
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, TEXT("非B站错误码，Http链接启动错误"));
		UKismetSystemLibrary::PrintString(this, FString(TEXT("非B站错误码，Http链接启动错误")));
	}else
	{
		UE_LOG(LogClass, Log, TEXT("Http请求发送成功"));
	}
}

void UWuBiLiBiLiApi::ReceivedMessage(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	CallBack* callbackPtr = RequestMap.Find(Request);
	CallBack callback = nullptr;
	if(callbackPtr)
	{
		callback = *callbackPtr;	
	}
	if(!callback)
	{
		UE_LOG(LogClass, Error, TEXT("非B站错误码，没有找到回调函数"));
	}
	
	RequestMap.Remove(Request);
	if (!IsValid(GameInstance)) {
		UE_LOG(LogClass, Error, TEXT("OnProcessRequestComplete没有GameInstance"));
		return;
	}
	if(!BiLiBiLiSubsystem)
	{
		UE_LOG(LogClass, Error, TEXT("BiLiBiLiSubsystem Is Null"));
		return;
	}
	if(!bConnectedSuccessfully)
	{
		UE_LOG(LogClass, Error, TEXT("Http请求失败，没有成功连接，请检查网络连接"));
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, TEXT("非B站错误码，Http请求失败，没有成功连接，请检查网络连接"));
		return;
	}
	if(!Response)
	{
		UE_LOG(LogClass, Error, TEXT("非B站错误码，没有返回值。请检查网络连接"));
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, TEXT("非B站错误码，没有返回值。请检查网络连接"));
		return;
	}
	if(!Request)
	{
		UE_LOG(LogClass, Error, TEXT("非B站错误码，没有返回值。请检查网络连接"));
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(0, TEXT("非B站错误码，没有返回值。请检查网络连接"));
		return;
	}
	


	int32 responseCode = Response->GetResponseCode();
	if (!(responseCode == 200)) {
		//callback(false,TEXT("非B站错误码，这是连接到B站服务器出错"));
		UE_LOG(LogClass, Error, TEXT("非B站错误码，这是连接到B站服务器出错。错误码：%d"), responseCode);
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(Response->GetResponseCode(), TEXT("非B站错误码，这是连接到B站服务器出错,请检查错误码（code）"));
		return;
	}

	FJsonObjectWrapper cotentJson;
	cotentJson.JsonObjectFromString(Response->GetContentAsString());
	if(!cotentJson.JsonObject)
	{
		UE_LOG(LogClass, Error, TEXT("错误，解析B站返回的消息失败。Json没有创建成功"));
		return;
	}
	int32 code = cotentJson.JsonObject->GetIntegerField(TEXT("code"));
	FString codeMessage = cotentJson.JsonObject->GetStringField(TEXT("message"));

	if (code == 0) {
		if (callback) {
			//(*callback)(true, Response->GetContentAsString());
			callback(true, Response->GetContentAsString());
		}
		//callback(true, Response->GetContentAsString());
	}
	else {
		BiLiBiLiSubsystem->ErrorEvent.Broadcast(code, codeMessage);
		if (callback) {
			//(*callback)(false, Response->GetContentAsString());
			callback(false, Response->GetContentAsString());
		}
		//callback(false, Response->GetContentAsString());
	}
	UE_LOG(LogClass, Log, TEXT("收到服务器消息，已调用回调函数处理"));

}

