// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/WuBiLiBiLiWebSocket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWuBiLiBiLiWebSocket() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiWebSocket();
WUBILIBILISDK_API UClass* Z_Construct_UClass_UWuBiLiBiLiWebSocket_NoRegister();
// End Cross Module References

// Begin Class UWuBiLiBiLiWebSocket
void UWuBiLiBiLiWebSocket::StaticRegisterNativesUWuBiLiBiLiWebSocket()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWuBiLiBiLiWebSocket);
UClass* Z_Construct_UClass_UWuBiLiBiLiWebSocket_NoRegister()
{
	return UWuBiLiBiLiWebSocket::StaticClass();
}
struct Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WuBiLiBiLiWebSocket.h" },
		{ "ModuleRelativePath", "Public/WuBiLiBiLiWebSocket.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x91\xe9\x80\x81\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbf\x83\xe8\xb7\xb3\xe6\x97\xb6\xe7\x9a\x84""Data\n" },
#endif
		{ "ModuleRelativePath", "Public/WuBiLiBiLiWebSocket.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x91\xe9\x80\x81\xe9\xa1\xb9\xe7\x9b\xae\xe5\xbf\x83\xe8\xb7\xb3\xe6\x97\xb6\xe7\x9a\x84""Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWuBiLiBiLiWebSocket>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWuBiLiBiLiWebSocket, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::NewProp_GameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::ClassParams = {
	&UWuBiLiBiLiWebSocket::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::Class_MetaDataParams), Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWuBiLiBiLiWebSocket()
{
	if (!Z_Registration_Info_UClass_UWuBiLiBiLiWebSocket.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWuBiLiBiLiWebSocket.OuterSingleton, Z_Construct_UClass_UWuBiLiBiLiWebSocket_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWuBiLiBiLiWebSocket.OuterSingleton;
}
template<> WUBILIBILISDK_API UClass* StaticClass<UWuBiLiBiLiWebSocket>()
{
	return UWuBiLiBiLiWebSocket::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWuBiLiBiLiWebSocket);
// End Class UWuBiLiBiLiWebSocket

// Begin Registration
struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiWebSocket_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWuBiLiBiLiWebSocket, UWuBiLiBiLiWebSocket::StaticClass, TEXT("UWuBiLiBiLiWebSocket"), &Z_Registration_Info_UClass_UWuBiLiBiLiWebSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWuBiLiBiLiWebSocket), 3846504119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiWebSocket_h_3940114656(TEXT("/Script/WuBiLiBiLiSDK"),
	Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiWebSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_WuBiLiBiLiWebSocket_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
