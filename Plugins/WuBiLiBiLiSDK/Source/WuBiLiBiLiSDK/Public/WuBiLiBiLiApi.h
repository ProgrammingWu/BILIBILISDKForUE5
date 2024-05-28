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
#include "Http.h"
#include "BiLiBiLiSubsystem.h"
#include "WuBiLiBiLiApi.generated.h"

class UBiLiBiLiSubsystem;
//#include 

/**
 * 获取哔哩哔哩长链的类
 */
UCLASS()
class WUBILIBILISDK_API UWuBiLiBiLiApi :public UObject
{
	GENERATED_BODY()
public:
	UWuBiLiBiLiApi();
	//UWuBiLiBiLiApi(UGameInstance* gameInstance);
	~UWuBiLiBiLiApi();
	
	void init(UGameInstance* gameInstance);

	//获得长链信息,信息将在CallBack回调函数中传入
	void getWebSocketData(CallBack callback);
	//发送您心跳包
	void sendheartBeat(const FString& GameID,CallBack callback);
	void sendEnd(const FString& GameID, const int64& APPID, CallBack callback);
	
private:
	//发送Http请求
	void sendHttpRequest(FString url, FString Data, CallBack callback);
	void ReceivedMessage(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);
	UPROPERTY()
	UGameInstance* GameInstance;
	UPROPERTY()
	UBiLiBiLiSubsystem* BiLiBiLiSubsystem;

	TMap<FHttpRequestPtr, CallBack>  RequestMap;//储存Http请求，和对应的回调函数指针的数组
	//出错后调用此函数
	//void error(CallBack callback);
};		
