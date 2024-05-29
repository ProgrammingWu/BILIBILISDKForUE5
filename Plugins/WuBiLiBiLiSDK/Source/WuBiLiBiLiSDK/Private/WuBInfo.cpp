/*
Copyright(c) 2023 B站UP：虚幻4-无. All Rights Reserved.
版权所有(c) 2023 B站UP：虚幻4-无，保留所有权利。

B站主页：https://space.bilibili.com/381317561
商务合作：
微信（电话同号）：15689882600
qq：1910991875
接游戏开发、数字孪生、数字人、AIGC
*/

#include "WuBInfo.h"

FDanMu::FDanMu()
{
	uname = TEXT("");
	uid = 0;
	uface = TEXT("");
	timestamp = 0;
	room_id = 0;
	msg = TEXT("");
	msg_id = TEXT("");
	guard_level = 0;
	fans_medal_wearing_status = false;
	fans_medal_name = TEXT("");
	fans_medal_level = 0;
	emoji_img_url = TEXT("");
	dm_type = 0;
}

FUserInfo::FUserInfo()
{
	uid = 0;
	uname = TEXT("");
	uface = TEXT("");
}

FComboInfo::FComboInfo()
{
	combo_base_num = 0;
	combo_count = 0;
	combo_id = TEXT("");
	combo_timeout = 0;
}

FGift::FGift(): combo_gift(false)
{
	room_id = 0;
	uid = 0;
	uname = TEXT("");
	uface = TEXT("");
	gift_id = 0;
	gift_name = TEXT("");
	gift_num = 0;
	price = 0;
	paid = false;
	fans_medal_level = 0;
	fans_medal_name = TEXT("");
	fans_medal_wearing_status = false;
	guard_level = 0;
	timestamp = 0;
	FUserInfo userinfo;
	anchor_info = userinfo;
	msg_id = TEXT("");
	gift_icon = TEXT("");
	bool haveComboGift = false;
	FComboInfo comboinfo1;
	combo_info = comboinfo1;
}

FSuperChat::FSuperChat()
{
	room_id = 0;
	uid = 0;
	uname = TEXT("");
	uface = TEXT("");
	message_id = 0;
	message = TEXT("");
	rmb = 0;
	timestamp = 0;
	start_time = 0;
	end_time = 0;
	guard_level = 0;
	fans_medal_level = 0;
	fans_medal_name = TEXT("");
	fans_medal_wearing_status = false;
	msg_id = TEXT("");
}

FSuperChatDelData::FSuperChatDelData()
{
	room_id = 0;
	msg_id = TEXT("");
}

FGuard::FGuard()
{
	FUserInfo userinfo1;
	user_info = userinfo1;
	guard_level = 0;
	guard_num = 0;
	guard_unit = TEXT("");
	fans_medal_level = 0;
	fans_medal_name = TEXT("");
	fans_medal_wearing_status = false;
	room_id = 0;
	msg_id = TEXT("");
	timestamp = 0;
}

FLike::FLike()
{
	uname = TEXT("");
	uid = 0;
	uface = TEXT("");
	timestamp = 0;
	room_id = 0;
	like_text = TEXT("");
	fans_medal_level = 0;
	fans_medal_name = TEXT("");
	fans_medal_wearing_status = false;
}
