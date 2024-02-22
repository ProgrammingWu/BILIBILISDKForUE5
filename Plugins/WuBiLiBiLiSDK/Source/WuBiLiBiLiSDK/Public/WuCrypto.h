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


UENUM(BlueprintType)
enum class EWuDigestAlgorithm : uint8
{
	MDC2				UMETA(DisplayName = "MDC2"),
	MD4					UMETA(DisplayName = "MD4"),
	MD5					UMETA(DisplayName = "MD5"),
	MD5_SHA1			UMETA(DisplayName = "MD5/SHA1"),
	SHA1				UMETA(DisplayName = "SHA1"),
	SHA224				UMETA(DisplayName = "SHA224"),
	SHA256				UMETA(DisplayName = "SHA256"),
	SHA384				UMETA(DisplayName = "SHA384"),
	SHA512_224			UMETA(DisplayName = "SHA512/224"),
	SHA512_256			UMETA(DisplayName = "SHA512/256"),
	SHA512				UMETA(DisplayName = "SHA512"),
	SHA3_224			UMETA(DisplayName = "SHA3_224"),
	SHA3_256			UMETA(DisplayName = "SHA3_256"),
	SHA3_384			UMETA(DisplayName = "SHA3_384"),
	SHA3_512			UMETA(DisplayName = "SHA3_512"),
	RIPEMD160			UMETA(DisplayName = "RIPEMD160"),
	WHIRLPOOL			UMETA(DisplayName = "WHIRLPOOL"),
	SHAKE128			UMETA(DisplayName = "SHAKE128"),
	SHAKE256			UMETA(DisplayName = "SHAKE256")
};


/**
 * 
 */
class WUBILIBILISDK_API WuCrypto
{
public:
	WuCrypto();
	~WuCrypto();
	static bool HMACString(const FString& String, const FString& Key, FString& Hash, EWuDigestAlgorithm HashType = EWuDigestAlgorithm::SHA256);
	static FString HMAC(const uint8* Data, uint32 Size, const FString& Key, EWuDigestAlgorithm HashType);
	static bool IsDigestSupported(EWuDigestAlgorithm HashType);
};
