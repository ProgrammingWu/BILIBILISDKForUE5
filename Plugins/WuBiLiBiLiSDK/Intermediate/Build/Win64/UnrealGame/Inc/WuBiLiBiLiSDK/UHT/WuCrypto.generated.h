// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WuCrypto.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WUBILIBILISDK_WuCrypto_generated_h
#error "WuCrypto.generated.h already included, missing '#pragma once' in WuCrypto.h"
#endif
#define WUBILIBILISDK_WuCrypto_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuCrypto_h


#define FOREACH_ENUM_EWUDIGESTALGORITHM(op) \
	op(EWuDigestAlgorithm::MDC2) \
	op(EWuDigestAlgorithm::MD4) \
	op(EWuDigestAlgorithm::MD5) \
	op(EWuDigestAlgorithm::MD5_SHA1) \
	op(EWuDigestAlgorithm::SHA1) \
	op(EWuDigestAlgorithm::SHA224) \
	op(EWuDigestAlgorithm::SHA256) \
	op(EWuDigestAlgorithm::SHA384) \
	op(EWuDigestAlgorithm::SHA512_224) \
	op(EWuDigestAlgorithm::SHA512_256) \
	op(EWuDigestAlgorithm::SHA512) \
	op(EWuDigestAlgorithm::SHA3_224) \
	op(EWuDigestAlgorithm::SHA3_256) \
	op(EWuDigestAlgorithm::SHA3_384) \
	op(EWuDigestAlgorithm::SHA3_512) \
	op(EWuDigestAlgorithm::RIPEMD160) \
	op(EWuDigestAlgorithm::WHIRLPOOL) \
	op(EWuDigestAlgorithm::SHAKE128) \
	op(EWuDigestAlgorithm::SHAKE256) 

enum class EWuDigestAlgorithm : uint8;
template<> struct TIsUEnumClass<EWuDigestAlgorithm> { enum { Value = true }; };
template<> WUBILIBILISDK_API UEnum* StaticEnum<EWuDigestAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
