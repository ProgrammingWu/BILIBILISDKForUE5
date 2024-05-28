/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/


#include "BiLiBiLiSubsystem.h"
#include "WuBiLiBiLiApi.h"
#include "WuBiLiBiLiWebSocket.h"
#include "JsonObjectWrapper.h"
#include "Dom/JsonObject.h"
#include "Kismet/KismetSystemLibrary.h" //Kismet

void UBiLiBiLiSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	BIWebSocket = nullptr;
	//bapi = MakeShareable(new WuBiLiBiLiApi(this->GetOuterUGameInstance()));
	bapi = NewObject<UWuBiLiBiLiApi>();
	
	bapi->init(GetOuterUGameInstance());
	UE_LOG(LogClass,Log,TEXT("加载UBiLiBiLiSubsystem子系统"));
	UKismetSystemLibrary::PrintString(this, FString(TEXT("加载UBiLiBiLiSubsystem子系统")));
}

void UBiLiBiLiSubsystem::Deinitialize()
{
	if (BIWebSocket) {
		if (BIWebSocket->islink()) {
			bapi->sendEnd(game_idstr, AppId, nullptr);
			UE_LOG(LogClass, Log, TEXT("未正常关闭和B站链接，已自动发送给B站服务器关闭消息"));
		}
		else {
			UE_LOG(LogClass, Log, TEXT("已正常关闭和B站链接"));
		}
	}
	UE_LOG(LogClass, Log, TEXT("卸载UBiLiBiLiSubsystem子系统"));
}

void UBiLiBiLiSubsystem::init(FString accessKeyId, FString accessKeySecret, int64 appId, FString code)
{
	AccessKeyId = accessKeyId;
	AccessKeySecret = accessKeySecret;
	AppId = appId;
	Code = code;
	//UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	
	//GetGameInstance();

	//TSharedPtr<WuBiLiBiLiApi> bAPI = MakeShareable(new WuBiLiBiLiApi());

}

void UBiLiBiLiSubsystem::start()
{
	UKismetSystemLibrary::PrintString(this, FString(TEXT("开始连接")));
	bapi->getWebSocketData([this](bool isSuccess, FString message) {
		if (isSuccess) {
			//UE_LOG(LogClass, Log, TEXT("成功，信息：%s"), *message);
			FJsonObjectWrapper messageJson;
			messageJson.JsonObjectFromString(message);

			//=========解析信息============
			TSharedPtr<FJsonObject> dataJson = messageJson.JsonObject->GetObjectField(TEXT("data"));
			//-------------解析场次信息------------
			// 用于保持项目心跳的GameID
			game_idstr = dataJson->GetObjectField(TEXT("game_info"))->GetStringField(TEXT("game_id")); 
			//----------解析长链信息---------------
			TSharedPtr<FJsonObject> websocket_infoJson = dataJson->GetObjectField(TEXT("websocket_info"));
			FString auth_body = websocket_infoJson->GetStringField(TEXT("auth_body")); //保持长链心跳，发送的消息


			TArray<TSharedPtr<FJsonValue>>wss_links =  websocket_infoJson->GetArrayField(TEXT("wss_link"));
			TArray<FString> wss_linkStrs; //长链地址
			for (auto wss_link : wss_links) {
				wss_linkStrs.Add(wss_link->AsString());
			}
			//UE_LOG(LogClass, Log, TEXT("GameID：%s"), *game_idstr);
			//UE_LOG(LogClass, Log, TEXT("auth_body：%s"), *auth_body);
			//UE_LOG(LogClass, Log, TEXT("第一个长链地址：%s"), *wss_linkStrs[0]);
			UKismetSystemLibrary::PrintString(this, FString(TEXT("解析信息成功，开始创建长链")));
			//-----新建长链------------
			if (!BIWebSocket) {
				BIWebSocket = NewObject<UWuBiLiBiLiWebSocket>();
			}
			BIWebSocket->createWebSocket(wss_linkStrs[0], auth_body, game_idstr, GetOuterUGameInstance(), [this](bool isSuccess, FString message) {
				
				//UE_LOG(LogClass, Log, TEXT("服务器消息为：%s"), *message);
				ProcessingWebSocketData(isSuccess, message); //解析消息
			});

			BIWebSocket->LinkBServer();//链接B站服务器
			
		}
	});
}

void UBiLiBiLiSubsystem::End()
{
	if (bapi) {
		bapi->sendEnd(game_idstr, AppId, [this](bool isSuccess, FString message) {
			if (BIWebSocket) {
				BIWebSocket->End();
			}
			EndEvent.Broadcast();
			});
	}
}

bool UBiLiBiLiSubsystem::islinkBiLiBiLi()
{
	if (!BIWebSocket) {
		return false;
	}

	return BIWebSocket->islink();
}



void UBiLiBiLiSubsystem::ProcessingWebSocketData(bool isSuccess, FString message)
{
	UE_LOG(LogClass, Log, TEXT("服务器消息为：%s"), *message);
	if (isSuccess) {
		FJsonObjectWrapper messageJson;
		messageJson.JsonObjectFromString(message);
		FString cmdstr = messageJson.JsonObject->GetStringField(TEXT("cmd"));
		TSharedPtr<FJsonObject> dataJson = messageJson.JsonObject->GetObjectField(TEXT("data"));
		if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_DM"))) {
			//FString msgstr = dataJson->GetStringField(TEXT("msg"));
			FDanMu danmu;
			danmu.uname = dataJson->GetStringField(TEXT("uname"));
			danmu.uid = dataJson->GetNumberField(TEXT("uid"));
			danmu.open_id = dataJson->GetStringField(TEXT("open_id"));
			danmu.uface = dataJson->GetStringField(TEXT("uface"));
			danmu.timestamp = dataJson->GetNumberField(TEXT("timestamp"));
			danmu.room_id = dataJson->GetNumberField(TEXT("room_id"));
			danmu.msg = dataJson->GetStringField(TEXT("msg"));
			danmu.msg_id = dataJson->GetStringField(TEXT("msg_id"));
			danmu.guard_level = dataJson->GetNumberField(TEXT("guard_level"));
			danmu.fans_medal_wearing_status = dataJson->GetBoolField(TEXT("fans_medal_wearing_status"));
			danmu.fans_medal_name = dataJson->GetStringField(TEXT("fans_medal_name"));
			danmu.fans_medal_level = dataJson->GetNumberField(TEXT("fans_medal_level"));
			danmu.emoji_img_url = dataJson->GetStringField(TEXT("emoji_img_url"));
			danmu.dm_type = dataJson->GetNumberField(TEXT("dm_type"));

			DanMuEvent.Broadcast(danmu);
			//FString msgstr = dataJson->GetStringField(TEXT("msg"));
			//UE_LOG(LogClass, Log, TEXT("收到弹幕：%s"), *msgstr);

		}
		else if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_SEND_GIFT"))) {
			FGift gift;
			gift.room_id = dataJson->GetNumberField(TEXT("room_id"));
			gift.uid = dataJson->GetNumberField(TEXT("uid"));
			gift.open_id = dataJson->GetStringField(TEXT("open_id"));
			gift.uname = dataJson->GetStringField(TEXT("uname"));
			gift.uface = dataJson->GetStringField(TEXT("uface"));
			gift.gift_id = dataJson->GetNumberField(TEXT("gift_id"));
			gift.gift_name = dataJson->GetStringField(TEXT("gift_name"));
			gift.gift_num = dataJson->GetNumberField(TEXT("gift_num"));
			gift.price = dataJson->GetNumberField(TEXT("price"));
			gift.paid = dataJson->GetBoolField(TEXT("paid"));
			gift.fans_medal_level = dataJson->GetNumberField(TEXT("fans_medal_level"));
			gift.fans_medal_name = dataJson->GetStringField(TEXT("fans_medal_name"));
			gift.fans_medal_wearing_status = dataJson->GetBoolField(TEXT("fans_medal_wearing_status"));
			gift.guard_level = dataJson->GetNumberField(TEXT("guard_level"));
			gift.timestamp = dataJson->GetNumberField(TEXT("timestamp"));
			//主播信息
			TSharedPtr<FJsonObject> anchor_infoJson = dataJson->GetObjectField(TEXT("anchor_info"));
			FUserInfo userinfo;
			userinfo.uid = anchor_infoJson->GetNumberField(TEXT("uid"));
			userinfo.open_id = anchor_infoJson->GetStringField(TEXT("open_id"));
			userinfo.uname = anchor_infoJson->GetStringField(TEXT("uname"));
			userinfo.uface = anchor_infoJson->GetStringField(TEXT("uface"));
			gift.anchor_info = userinfo;
			//----------
			gift.msg_id = dataJson->GetStringField(TEXT("msg_id"));
			gift.gift_icon = dataJson->GetStringField(TEXT("gift_icon"));
			bool haveComboGift  = gift.combo_gift = dataJson->GetBoolField(TEXT("combo_gift"));
			if (haveComboGift) {
				//连击信息
				TSharedPtr<FJsonObject> comboInfoJson = dataJson->GetObjectField(TEXT("combo_info"));
				FComboInfo comboinfo;
				comboinfo.combo_base_num = comboInfoJson->GetNumberField(TEXT("combo_base_num"));
				comboinfo.combo_count = comboInfoJson->GetNumberField(TEXT("combo_count"));
				comboinfo.combo_id = comboInfoJson->GetStringField(TEXT("combo_id"));
				comboinfo.combo_timeout = comboInfoJson->GetNumberField(TEXT("combo_timeout"));
				gift.combo_info = comboinfo;
				//-------------
			}
			GiftEvent.Broadcast(gift);
		}
		else if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_SUPER_CHAT"))) {
			FSuperChat superchat;
			superchat.room_id = dataJson->GetNumberField(TEXT("room_id"));
			superchat.uid = dataJson->GetNumberField(TEXT("uid"));
			superchat.open_id = dataJson->GetStringField(TEXT("open_id"));
			superchat.uname = dataJson->GetStringField(TEXT("uname"));
			superchat.uface = dataJson->GetStringField(TEXT("uface"));
			superchat.message_id = dataJson->GetNumberField(TEXT("message_id"));
			superchat.message = dataJson->GetStringField(TEXT("message"));
			superchat.rmb = dataJson->GetNumberField(TEXT("rmb"));
			superchat.timestamp = dataJson->GetNumberField(TEXT("timestamp"));
			superchat.start_time = dataJson->GetNumberField(TEXT("start_time"));
			superchat.end_time = dataJson->GetNumberField(TEXT("end_time"));
			superchat.guard_level = dataJson->GetNumberField(TEXT("guard_level"));
			superchat.fans_medal_level = dataJson->GetNumberField(TEXT("fans_medal_level"));
			superchat.fans_medal_name = dataJson->GetStringField(TEXT("fans_medal_name"));
			superchat.fans_medal_wearing_status = dataJson->GetBoolField(TEXT("fans_medal_wearing_status"));
			superchat.msg_id = dataJson->GetStringField(TEXT("msg_id"));
			SuperChatEvent.Broadcast(superchat);
		}							 
		else if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_SUPER_CHAT_DEL"))) {
			FSuperChatDelData superchatd;
			superchatd.room_id = dataJson->GetNumberField(TEXT("room_id"));
			TArray<TSharedPtr<FJsonValue>> message_idsJsons = dataJson->GetArrayField(TEXT("message_ids"));
			for (auto message_idsJsonValue : message_idsJsons) {
				superchatd.message_ids.Add(message_idsJsonValue->AsNumber());
			}
			superchatd.msg_id = dataJson->GetStringField(TEXT("msg_id"));
			SuperChatDelEvent.Broadcast(superchatd);
			//UE_LOG(LogClass, Log, TEXT("付费留言消息解析2：%s"), *message);
		}
		else if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_GUARD"))) {
			FGuard guard;
			//用户信息
			TSharedPtr<FJsonObject> user_infoJson = dataJson->GetObjectField(TEXT("user_info"));
			FUserInfo userinfo;
			userinfo.uid = user_infoJson->GetNumberField(TEXT("uid"));
			userinfo.open_id = user_infoJson->GetStringField(TEXT("open_id"));
			userinfo.uname = user_infoJson->GetStringField(TEXT("uname"));
			userinfo.uface = user_infoJson->GetStringField(TEXT("uface"));
			guard.user_info = userinfo;
			//-----------
			guard.guard_level = dataJson->GetNumberField(TEXT("guard_level"));
			guard.guard_num = dataJson->GetNumberField(TEXT("guard_num"));
			guard.guard_unit = dataJson->GetStringField(TEXT("guard_unit"));
			guard.fans_medal_level = dataJson->GetNumberField(TEXT("fans_medal_level"));
			guard.fans_medal_name = dataJson->GetStringField(TEXT("fans_medal_name"));
			guard.fans_medal_wearing_status = dataJson->GetBoolField(TEXT("fans_medal_wearing_status"));
			guard.room_id = dataJson->GetNumberField(TEXT("room_id"));
			guard.msg_id = dataJson->GetStringField(TEXT("msg_id"));
			guard.timestamp = dataJson-> GetNumberField(TEXT("timestamp"));
			GuardEvent.Broadcast(guard);
		}
		else if (cmdstr.Equals(TEXT("LIVE_OPEN_PLATFORM_LIKE"))) {
			FLike like;
			like.uname = dataJson->GetStringField(TEXT("uname"));
			like.uid = dataJson->GetNumberField(TEXT("uid"));
			like.open_id = dataJson->GetStringField(TEXT("open_id"));
			like.uface = dataJson->GetStringField(TEXT("uface"));
			like.timestamp = dataJson->GetNumberField(TEXT("timestamp"));
			like.room_id = dataJson->GetNumberField(TEXT("room_id"));
			like.like_text = dataJson->GetStringField(TEXT("like_text"));
			like.fans_medal_level = dataJson->GetNumberField(TEXT("fans_medal_level"));
			like.fans_medal_name = dataJson->GetStringField(TEXT("fans_medal_name"));
			like.fans_medal_wearing_status = dataJson->GetBoolField(TEXT("fans_medal_wearing_status"));
			LikeEvent.Broadcast(like);
		}
	}
}


