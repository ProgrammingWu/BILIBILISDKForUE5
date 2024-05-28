// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/WuCrypto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuCrypto() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
WUBILIBILISDK_API UEnum* Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm();
// End Cross Module References

// Begin Enum EWuDigestAlgorithm
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWuDigestAlgorithm;
static UEnum* EWuDigestAlgorithm_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWuDigestAlgorithm.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWuDigestAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm, (UObject*)Z_Construct_UPackage__Script_WuBiLiBiLiSDK(), TEXT("EWuDigestAlgorithm"));
	}
	return Z_Registration_Info_UEnum_EWuDigestAlgorithm.OuterSingleton;
}
template<> WUBILIBILISDK_API UEnum* StaticEnum<EWuDigestAlgorithm>()
{
	return EWuDigestAlgorithm_StaticEnum();
}
struct Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MD4.DisplayName", "MD4" },
		{ "MD4.Name", "EWuDigestAlgorithm::MD4" },
		{ "MD5.DisplayName", "MD5" },
		{ "MD5.Name", "EWuDigestAlgorithm::MD5" },
		{ "MD5_SHA1.DisplayName", "MD5/SHA1" },
		{ "MD5_SHA1.Name", "EWuDigestAlgorithm::MD5_SHA1" },
		{ "MDC2.DisplayName", "MDC2" },
		{ "MDC2.Name", "EWuDigestAlgorithm::MDC2" },
		{ "ModuleRelativePath", "Public/WuCrypto.h" },
		{ "RIPEMD160.DisplayName", "RIPEMD160" },
		{ "RIPEMD160.Name", "EWuDigestAlgorithm::RIPEMD160" },
		{ "SHA1.DisplayName", "SHA1" },
		{ "SHA1.Name", "EWuDigestAlgorithm::SHA1" },
		{ "SHA224.DisplayName", "SHA224" },
		{ "SHA224.Name", "EWuDigestAlgorithm::SHA224" },
		{ "SHA256.DisplayName", "SHA256" },
		{ "SHA256.Name", "EWuDigestAlgorithm::SHA256" },
		{ "SHA384.DisplayName", "SHA384" },
		{ "SHA384.Name", "EWuDigestAlgorithm::SHA384" },
		{ "SHA3_224.DisplayName", "SHA3_224" },
		{ "SHA3_224.Name", "EWuDigestAlgorithm::SHA3_224" },
		{ "SHA3_256.DisplayName", "SHA3_256" },
		{ "SHA3_256.Name", "EWuDigestAlgorithm::SHA3_256" },
		{ "SHA3_384.DisplayName", "SHA3_384" },
		{ "SHA3_384.Name", "EWuDigestAlgorithm::SHA3_384" },
		{ "SHA3_512.DisplayName", "SHA3_512" },
		{ "SHA3_512.Name", "EWuDigestAlgorithm::SHA3_512" },
		{ "SHA512.DisplayName", "SHA512" },
		{ "SHA512.Name", "EWuDigestAlgorithm::SHA512" },
		{ "SHA512_224.DisplayName", "SHA512/224" },
		{ "SHA512_224.Name", "EWuDigestAlgorithm::SHA512_224" },
		{ "SHA512_256.DisplayName", "SHA512/256" },
		{ "SHA512_256.Name", "EWuDigestAlgorithm::SHA512_256" },
		{ "SHAKE128.DisplayName", "SHAKE128" },
		{ "SHAKE128.Name", "EWuDigestAlgorithm::SHAKE128" },
		{ "SHAKE256.DisplayName", "SHAKE256" },
		{ "SHAKE256.Name", "EWuDigestAlgorithm::SHAKE256" },
		{ "WHIRLPOOL.DisplayName", "WHIRLPOOL" },
		{ "WHIRLPOOL.Name", "EWuDigestAlgorithm::WHIRLPOOL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWuDigestAlgorithm::MDC2", (int64)EWuDigestAlgorithm::MDC2 },
		{ "EWuDigestAlgorithm::MD4", (int64)EWuDigestAlgorithm::MD4 },
		{ "EWuDigestAlgorithm::MD5", (int64)EWuDigestAlgorithm::MD5 },
		{ "EWuDigestAlgorithm::MD5_SHA1", (int64)EWuDigestAlgorithm::MD5_SHA1 },
		{ "EWuDigestAlgorithm::SHA1", (int64)EWuDigestAlgorithm::SHA1 },
		{ "EWuDigestAlgorithm::SHA224", (int64)EWuDigestAlgorithm::SHA224 },
		{ "EWuDigestAlgorithm::SHA256", (int64)EWuDigestAlgorithm::SHA256 },
		{ "EWuDigestAlgorithm::SHA384", (int64)EWuDigestAlgorithm::SHA384 },
		{ "EWuDigestAlgorithm::SHA512_224", (int64)EWuDigestAlgorithm::SHA512_224 },
		{ "EWuDigestAlgorithm::SHA512_256", (int64)EWuDigestAlgorithm::SHA512_256 },
		{ "EWuDigestAlgorithm::SHA512", (int64)EWuDigestAlgorithm::SHA512 },
		{ "EWuDigestAlgorithm::SHA3_224", (int64)EWuDigestAlgorithm::SHA3_224 },
		{ "EWuDigestAlgorithm::SHA3_256", (int64)EWuDigestAlgorithm::SHA3_256 },
		{ "EWuDigestAlgorithm::SHA3_384", (int64)EWuDigestAlgorithm::SHA3_384 },
		{ "EWuDigestAlgorithm::SHA3_512", (int64)EWuDigestAlgorithm::SHA3_512 },
		{ "EWuDigestAlgorithm::RIPEMD160", (int64)EWuDigestAlgorithm::RIPEMD160 },
		{ "EWuDigestAlgorithm::WHIRLPOOL", (int64)EWuDigestAlgorithm::WHIRLPOOL },
		{ "EWuDigestAlgorithm::SHAKE128", (int64)EWuDigestAlgorithm::SHAKE128 },
		{ "EWuDigestAlgorithm::SHAKE256", (int64)EWuDigestAlgorithm::SHAKE256 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
	nullptr,
	"EWuDigestAlgorithm",
	"EWuDigestAlgorithm",
	Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm()
{
	if (!Z_Registration_Info_UEnum_EWuDigestAlgorithm.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWuDigestAlgorithm.InnerSingleton, Z_Construct_UEnum_WuBiLiBiLiSDK_EWuDigestAlgorithm_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWuDigestAlgorithm.InnerSingleton;
}
// End Enum EWuDigestAlgorithm

// Begin Registration
struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuCrypto_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWuDigestAlgorithm_StaticEnum, TEXT("EWuDigestAlgorithm"), &Z_Registration_Info_UEnum_EWuDigestAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1346105249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuCrypto_h_1650426684(TEXT("/Script/WuBiLiBiLiSDK"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuCrypto_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuCrypto_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
