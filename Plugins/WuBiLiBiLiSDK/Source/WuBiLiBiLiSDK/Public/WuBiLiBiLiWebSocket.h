/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/

#pragma once

#include "CoreMinimal.h"
#include "IWebSocket.h"
#include "BiLiBiLiSubsystem.h"

//以下头文件，仅为单独打包插件错误包含。如果不单独打包插件，无需包含
#include "Engine/EngineTypes.h"
#include "Engine/GameInstance.h"

#include "WuBiLiBiLiWebSocket.generated.h"


#define UNZIP_BUFF_SIZE 65536
/**
 * 
 */
UCLASS()
class WUBILIBILISDK_API UWuBiLiBiLiWebSocket :public UObject //这里继承UOBJECT的原因是为了绑定事件
{
	GENERATED_BODY()
public:
	/*
	* @param url - 链接地址
	* @param body - 心跳包信息
	* @param gameInstance - 游戏模式对象
	*/
	UWuBiLiBiLiWebSocket();
	~UWuBiLiBiLiWebSocket();

	//创建WebScoket的函数
	void createWebSocket(const FString& url, const FString& body,const FString& gameid, const UGameInstance* gameInstance, CallBack callback);
	//链接B站服务器
	void LinkBServer();
	//断开链接
	void End();
	//判断是否正在和B站服务器链接
	bool islink();

private:
	//void OnConnected(); //当链接成功时
	void heartBeat();
	
	void getBytesByInt(TArray<unsigned char>& buffer, int value);
	void getBytesByShort(TArray<unsigned char>& buffer, short value);
	int toInt(unsigned char* buffer, int index);
	int toShort(unsigned char* buffer, int index);


	TSharedPtr<IWebSocket> WebSockets;
	FString Body; //发送心跳包时，发送的信息
	FString GameId_xintiao; //发送项目心跳时的Data
	UPROPERTY()
	const UGameInstance* GameInstance;
	FTimerHandle heartBeatTimerHandle; //发送心跳包的定时器手柄
	unsigned char unzipBuffer[UNZIP_BUFF_SIZE];
};
