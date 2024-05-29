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
#include "Subsystems/GameInstanceSubsystem.h"
#include "WuBInfo.h"
#include "BiLiBiLiSubsystem.generated.h"

typedef TFunction<void(bool isSuccess, FString message)> CallBack;
class UWuBiLiBiLiApi;
class UWuBiLiBiLiWebSocket;

//错误委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FErrorDelegate, int32, code, FString, ErrorMessage);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams
/*
此委托仅在WebSocket成功链接后。因为B站服务器心跳时返回错误代码（如房间过期等），服务器拒绝链接
断开连接时被调用。
设计这个的原因时，蓝图可以绑定事件，手动重新从服务器获取鉴权信息。手动重连服务器。
如果需要重连可绑定一个事件，事件调用start()就可以了。
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisconnectWebSocketDelegate,FString,Message);

//链接成功委托，当链接B站服务器成功时调用
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLinkSuccessDelegate);

/*
这个委托是手动发送停止链接请求。且收到服务器停止请求的信息时。才会被调用
注意，如果结束时，没有手动发送请求。会自动向服务器发送请求，自动向服务器发送的请求，不会调用此委托
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);

/*
此委托是收到弹幕时的委托
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDanMuDelegate,FDanMu, DanMu);

//收到礼物委托
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGiftDelegate, FGift, Gift);

//付费留言
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuperChatDelegate, FSuperChat, SuperChat);

//付费留言下线
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSuperChatDelDelegate, FSuperChatDelData, SuperChatDelData);

//大航海
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuardDelegate, FGuard, Guard);

//点赞
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLikeDelegate, FLike, Like);

/**
 * 
 */
UCLASS()
class WUBILIBILISDK_API UBiLiBiLiSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UBiLiBiLiSubsystem();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;


	UPROPERTY(BlueprintAssignable)
		FErrorDelegate ErrorEvent;
	UPROPERTY(BlueprintAssignable)
		FDisconnectWebSocketDelegate DisconnectWebSocketEvent;
	UPROPERTY(BlueprintAssignable)
		FEndDelegate EndEvent;
	UPROPERTY(BlueprintAssignable)
		FDanMuDelegate DanMuEvent;
	UPROPERTY(BlueprintAssignable)
		FGiftDelegate GiftEvent;
	UPROPERTY(BlueprintAssignable)
		FSuperChatDelegate SuperChatEvent;
	UPROPERTY(BlueprintAssignable)
		FSuperChatDelDelegate SuperChatDelEvent;
	UPROPERTY(BlueprintAssignable)
		FGuardDelegate GuardEvent;
	UPROPERTY(BlueprintAssignable)
		FLikeDelegate LikeEvent;
	UPROPERTY(BlueprintAssignable)
		FLinkSuccessDelegate LinkSuccessEvent;

	/*
	初始化信息。
	@param accessKeyID - 开发者ID。请去B站开放平台申请。申请通过后，和开发者密钥一并发放
	@param accessKeySecret - 开发者密钥。请去B站开放平台申请。申请通过后，和开发者ID一并发放
	@param appID - 项目ID，请新建一个项目，设为互动玩法（只新建就好，无需提交审核）。然后拷贝项目ID到这里。
	@param code - 身份码。直播中心 (opens new window)> 我的直播间 > 开始直播 > 身份码
	*/
	UFUNCTION(BlueprintCallable,Category = "WuBiLiBiLi")
	void init(FString accessKeyId, FString accessKeySecret, int64 appId, FString code);

	/*
	开始尝试链接，请在链接之前，确保使用init初始化了。
	将会先从服务器获取鉴权信息。成功获取后，就建立WebSocket长链
	*/
	UFUNCTION(BlueprintCallable, Category = "WuBiLiBiLi")
		void start();

	/*
	给B站服务器发送停止链接的请求，并断开链接
	虽然此系统会在退出时，自动给B站服务器发送退出消息（调用B站End接口）。但这是兜底机制（因可能存在网络波动问题，所以此兜底机制不会百分百成功）。
	所以建议在退出时，使用此End函数（调用B站End接口），记得提前绑定EndEvent委托，当收到B站服务器回复后，会自动调用EndEvent委托。由EndEvent委托结束游戏
	
	另外，如果需要手动断开B站服务器链接，也可以使用此函数
	*/
	UFUNCTION(BlueprintCallable, Category = "WuBiLiBiLi")
		void End();

	/*
	返回B站服务器是否成功链接。
	*/
	UFUNCTION(BlueprintPure, Category = "WuBiLiBiLi")
		bool islinkBiLiBiLi();

	FString AccessKeyId, AccessKeySecret, Code;
	int64 AppId;

	//TSharedPtr<WuBiLiBiLiApi> bapi;
	UPROPERTY()
	UWuBiLiBiLiApi* bapi;
private:
	void ProcessingWebSocketData(bool isSuccess, FString message);

	FString game_idstr;//当Http鉴权成功后，返回的GameID。用于心跳和项目关闭
	UPROPERTY()
	UWuBiLiBiLiWebSocket* BIWebSocket;
};
