// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/WuBiLiBiLiApi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuBiLiBiLiApi() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
	WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiApi();
	WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiApi_NoRegister();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWuBiLiBiLiApi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiApi_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWuBiLiBiLiApi_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x8e\xb7\xe5\x8f\x96\xe5\x93\x94\xe5\x93\xa9\xe5\x93\x94\xe5\x93\xa9\xe9\x95\xbf\xe9\x93\xbe\xe7\x9a\x84\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "WuBiLiBiLiApi.h" },
		{ "ModuleRelativePath", "Public/WuBiLiBiLiApi.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x93\x94\xe5\x93\xa9\xe5\x93\x94\xe5\x93\xa9\xe9\x95\xbf\xe9\x93\xbe\xe7\x9a\x84\xe7\xb1\xbb" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWuBiLiBiLiApi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWuBiLiBiLiApi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWuBiLiBiLiApi_Statics::ClassParams = {
		&UWuBiLiBiLiApi::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWuBiLiBiLiApi, UWuBiLiBiLiApi::StaticClass, TEXT("UWuBiLiBiLiApi"), &Z_Registration_Info_UClass_UWuBiLiBiLiApi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWuBiLiBiLiApi), 3598493084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_2365734720(TEXT("/Script/WuBiLiBiLiSDK"),
		Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiApi_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
