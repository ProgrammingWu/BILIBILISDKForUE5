// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/WuBiLiBiLiApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuBiLiBiLiApi() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
WUBILIBILISDK_API UClass* Z_Construct_UClass_UBiLiBiLiSubsystem_NoRegister();
WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiApi();
WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiApi_NoRegister();
// End Cross Module References

// Begin Class UWuBiLiBiLiApi
void UWuBiLiBiLiApi::StaticRegisterNativesUWuBiLiBiLiApi()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWuBiLiBiLiApi);
UClass* Z_Construct_UClass_UWuBiLiBiLiApi_NoRegister()
{
	return UWuBiLiBiLiApi::StaticClass();
}
struct Z_Construct_UClass_UWuBiLiBiLiApi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x8e\xb7\xe5\x8f\x96\xe5\x93\x94\xe5\x93\xa9\xe5\x93\x94\xe5\x93\xa9\xe9\x95\xbf\xe9\x93\xbe\xe7\x9a\x84\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "WuBiLiBiLiApi.h" },
		{ "ModuleRelativePath", "Public/WuBiLiBiLiApi.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x93\x94\xe5\x93\xa9\xe5\x93\x94\xe5\x93\xa9\xe9\x95\xbf\xe9\x93\xbe\xe7\x9a\x84\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WuBiLiBiLiApi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiLiBiLiSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/WuBiLiBiLiApi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BiLiBiLiSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWuBiLiBiLiApi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWuBiLiBiLiApi_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWuBiLiBiLiApi, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWuBiLiBiLiApi_Statics::NewProp_BiLiBiLiSubsystem = { "BiLiBiLiSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWuBiLiBiLiApi, BiLiBiLiSubsystem), Z_Construct_UClass_UBiLiBiLiSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiLiBiLiSubsystem_MetaData), NewProp_BiLiBiLiSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWuBiLiBiLiApi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWuBiLiBiLiApi_Statics::NewProp_GameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWuBiLiBiLiApi_Statics::NewProp_BiLiBiLiSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiApi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWuBiLiBiLiApi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiApi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWuBiLiBiLiApi_Statics::ClassParams = {
	&UWuBiLiBiLiApi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWuBiLiBiLiApi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiApi_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiApi_Statics::Class_MetaDataParams), Z_Construct_UClass_UWuBiLiBiLiApi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWuBiLiBiLiApi()
{
	if (!Z_Registration_Info_UClass_UWuBiLiBiLiApi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWuBiLiBiLiApi.OuterSingleton, Z_Construct_UClass_UWuBiLiBiLiApi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWuBiLiBiLiApi.OuterSingleton;
}
template<> WUBILIBILISDK_API UClass* StaticClass<UWuBiLiBiLiApi>()
{
	return UWuBiLiBiLiApi::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWuBiLiBiLiApi);
// End Class UWuBiLiBiLiApi

// Begin Registration
struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWuBiLiBiLiApi, UWuBiLiBiLiApi::StaticClass, TEXT("UWuBiLiBiLiApi"), &Z_Registration_Info_UClass_UWuBiLiBiLiApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWuBiLiBiLiApi), 1157332361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_3264172767(TEXT("/Script/WuBiLiBiLiSDK"),
	Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
