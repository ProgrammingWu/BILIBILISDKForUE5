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
#include "WuBInfo.generated.h"

/*
UENUM(BlueprintType)
enum EErrorType {

};
*/

USTRUCT(BlueprintType)
struct  WUBILIBILISDK_API FDanMu {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 用户昵称
		FString uname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 用户UID(2024.05.28更新：因B站API废弃此变量，所以这个固定为0了，参见：open_id)
		int64 uid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户唯一标识（2024.05.28更新中添加）
	FString open_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 用户头像
		FString uface;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 弹幕发送时间秒级时间戳
		int64 timestamp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 弹幕接收的直播间
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 弹幕内容
		FString msg;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 消息唯一id
		FString msg_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 对应房间大航海等级
		int64 guard_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 当前佩戴的粉丝勋章佩戴状态
		bool fans_medal_wearing_status;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 粉丝勋章名
		FString fans_medal_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 对应房间勋章信息
		int64 fans_medal_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 表情包图片地址
		FString emoji_img_url;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 弹幕类型：0-普通弹幕；1-表情包弹幕
		int64 dm_type;
	FDanMu();
};


USTRUCT(BlueprintType)
struct WUBILIBILISDK_API FUserInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户UID(2024.05.28更新：因B站API废弃此变量，所以这个固定为0了，参见：open_id)
	int64 uid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户唯一标识（2024.05.28更新中添加）
	FString open_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 收礼主播昵称
		FString uname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 收礼主播头像
		FString uface;
	FUserInfo();
};
USTRUCT(BlueprintType)
struct WUBILIBILISDK_API FComboInfo {
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 每次连击赠送的道具数量
		int64 combo_base_num;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 连击次数
		int64 combo_count;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 连击id
		FString combo_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 连击有效期秒
		int64 combo_timeout;
	FComboInfo();
};

// 礼物
USTRUCT(BlueprintType)
struct WUBILIBILISDK_API FGift
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 房间号
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户UID(2024.05.28更新：因B站API废弃此变量，所以这个固定为0了，参见：open_id)
	int64 uid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户唯一标识（2024.05.28更新中添加）
	FString open_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//送礼用户昵称
		FString uname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 送礼用户头像
		FString uface;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 道具id(盲盒:爆出道具id)
		int64 gift_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 道具名(盲盒:爆出道具名)
		FString gift_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 赠送道具数量
		int64 gift_num;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 支付金额(1000 = 1元 = 10电池),盲盒:爆出道具的价值
		int64 price;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 是否是付费道具
		bool paid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 实际送礼人的勋章信息
		int64 fans_medal_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//粉丝勋章名
		FString fans_medal_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 当前佩戴的粉丝勋章佩戴状态
		bool fans_medal_wearing_status;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 大航海等级
		int64 guard_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 收礼时间秒级时间戳
		int64 timestamp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 主播信息
		FUserInfo anchor_info;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 消息唯一id
		FString msg_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 道具icon
		FString gift_icon;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 是否是combo道具
		bool combo_gift;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// combo_info结构体
		FComboInfo combo_info;

	FGift();
};


// 付费留言
USTRUCT(BlueprintType)
struct WUBILIBILISDK_API FSuperChat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 直播间id
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户UID(2024.05.28更新：因B站API废弃此变量，所以这个固定为0了，参见：open_id)
	int64 uid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户唯一标识（2024.05.28更新中添加）
	FString open_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 购买的用户昵称
		FString uname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 购买用户头像
		FString uface;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 留言id(风控场景下撤回留言需要)
		int64 message_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 留言内容
		FString message;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 支付金额(元)
		int64 rmb;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 赠送时间秒级
		int64 timestamp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 生效开始时间
		int64 start_time;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 生效结束时间
		int64 end_time;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 对应房间大航海等级
		int64 guard_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 对应房间勋章信息
		int64 fans_medal_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 对应房间勋章名字
		FString fans_medal_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 当前佩戴的粉丝勋章佩戴状态
		bool fans_medal_wearing_status;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 消息唯一id
		FString msg_id;

	FSuperChat();
};

// 付费留言
USTRUCT(BlueprintType)
struct WUBILIBILISDK_API FSuperChatDelData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 直播间id
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 留言id(风控场景下撤回留言需要)
		TArray<int64> message_ids;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 消息唯一id
		FString msg_id;
	FSuperChatDelData();
};


// 大航海
USTRUCT(BlueprintType)
struct FGuard
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 用户信息
		FUserInfo user_info;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 大航海等级
		int64 guard_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 大航海数量
		int64 guard_num;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 大航海单位
		FString guard_unit;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 粉丝勋章等级
		int64 fans_medal_level;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 粉丝勋章名
		FString fans_medal_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 佩戴的粉丝勋章佩戴状态
		bool fans_medal_wearing_status;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 房间号
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 消息唯一id
		FString msg_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		// 上舰时间秒级时间戳
		int64 timestamp;
	FGuard();
};

USTRUCT(BlueprintType)
struct FLike {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//用户昵称
		FString uname;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户UID(2024.05.28更新：因B站API废弃此变量，所以这个固定为0了，参见：open_id)
	int64 uid;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
	// 用户唯一标识（2024.05.28更新中添加）
	FString open_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//用户头像
		FString uface;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//时间秒级时间戳
		int64 timestamp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//发生的直播间
		int64 room_id;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//点赞文案( “xxx点赞了”)
		FString like_text;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//该房间粉丝勋章佩戴情况
		bool fans_medal_wearing_status;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//粉丝勋章名
		FString fans_medal_name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wubilibili")
		//对应房间勋章信息
		int64 fans_medal_level;
	FLike();
};