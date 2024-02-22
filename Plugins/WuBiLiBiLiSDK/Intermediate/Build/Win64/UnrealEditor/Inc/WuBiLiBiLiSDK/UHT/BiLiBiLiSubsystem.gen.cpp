// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WuBiLiBiLiSDK/Public/BiLiBiLiSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "WuBiLiBiLiSDK/Public/WuBInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBiLiBiLiSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_WuBiLiBiLiSDK();
	WUBILIBILISDK_API UClass* Z_Construct_UClass_UBiLiBiLiSubsystem();
	WUBILIBILISDK_API UClass* Z_Construct_UClass_UBiLiBiLiSubsystem_NoRegister();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature();
	WUBILIBILISDK_API UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FDanMu();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FGift();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FGuard();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FLike();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FSuperChat();
	WUBILIBILISDK_API UScriptStruct* Z_Construct_UScriptStruct_FSuperChatDelData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms
		{
			int32 code;
			FString ErrorMessage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_code;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms, code), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::NewProp_code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x94\x99\xe8\xaf\xaf\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x94\x99\xe8\xaf\xaf\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "ErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ErrorDelegate, int32 code, const FString& ErrorMessage)
{
	struct _Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms
	{
		int32 code;
		FString ErrorMessage;
	};
	_Script_WuBiLiBiLiSDK_eventErrorDelegate_Parms Parms;
	Parms.code=code;
	Parms.ErrorMessage=ErrorMessage;
	ErrorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98\xe4\xbb\x85\xe5\x9c\xa8WebSocket\xe6\x88\x90\xe5\x8a\x9f\xe9\x93\xbe\xe6\x8e\xa5\xe5\x90\x8e\xe3\x80\x82\xe5\x9b\xa0\xe4\xb8\xba""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xbf\x83\xe8\xb7\xb3\xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e\xe9\x94\x99\xe8\xaf\xaf\xe4\xbb\xa3\xe7\xa0\x81\xef\xbc\x88\xe5\xa6\x82\xe6\x88\xbf\xe9\x97\xb4\xe8\xbf\x87\xe6\x9c\x9f\xe7\xad\x89\xef\xbc\x89\xef\xbc\x8c\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8b\x92\xe7\xbb\x9d\xe9\x93\xbe\xe6\x8e\xa5\n\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x97\xb6\xe8\xa2\xab\xe8\xb0\x83\xe7\x94\xa8\xe3\x80\x82\n\xe8\xae\xbe\xe8\xae\xa1\xe8\xbf\x99\xe4\xb8\xaa\xe7\x9a\x84\xe5\x8e\x9f\xe5\x9b\xa0\xe6\x97\xb6\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe4\xbb\xa5\xe7\xbb\x91\xe5\xae\x9a\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe6\x89\x8b\xe5\x8a\xa8\xe9\x87\x8d\xe6\x96\xb0\xe4\xbb\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe9\x89\xb4\xe6\x9d\x83\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\xe6\x89\x8b\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe3\x80\x82\n\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe8\xbf\x9e\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe4\xba\x8b\xe4\xbb\xb6\xe8\xb0\x83\xe7\x94\xa8start()\xe5\xb0\xb1\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xba\x86\xe3\x80\x82\n*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98\xe4\xbb\x85\xe5\x9c\xa8WebSocket\xe6\x88\x90\xe5\x8a\x9f\xe9\x93\xbe\xe6\x8e\xa5\xe5\x90\x8e\xe3\x80\x82\xe5\x9b\xa0\xe4\xb8\xba""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\xbf\x83\xe8\xb7\xb3\xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e\xe9\x94\x99\xe8\xaf\xaf\xe4\xbb\xa3\xe7\xa0\x81\xef\xbc\x88\xe5\xa6\x82\xe6\x88\xbf\xe9\x97\xb4\xe8\xbf\x87\xe6\x9c\x9f\xe7\xad\x89\xef\xbc\x89\xef\xbc\x8c\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8b\x92\xe7\xbb\x9d\xe9\x93\xbe\xe6\x8e\xa5\n\xe6\x96\xad\xe5\xbc\x80\xe8\xbf\x9e\xe6\x8e\xa5\xe6\x97\xb6\xe8\xa2\xab\xe8\xb0\x83\xe7\x94\xa8\xe3\x80\x82\n\xe8\xae\xbe\xe8\xae\xa1\xe8\xbf\x99\xe4\xb8\xaa\xe7\x9a\x84\xe5\x8e\x9f\xe5\x9b\xa0\xe6\x97\xb6\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe4\xbb\xa5\xe7\xbb\x91\xe5\xae\x9a\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe6\x89\x8b\xe5\x8a\xa8\xe9\x87\x8d\xe6\x96\xb0\xe4\xbb\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe9\x89\xb4\xe6\x9d\x83\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\xe6\x89\x8b\xe5\x8a\xa8\xe9\x87\x8d\xe8\xbf\x9e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe3\x80\x82\n\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe9\x87\x8d\xe8\xbf\x9e\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe4\xb8\x80\xe4\xb8\xaa\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe4\xba\x8b\xe4\xbb\xb6\xe8\xb0\x83\xe7\x94\xa8start()\xe5\xb0\xb1\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xba\x86\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "DisconnectWebSocketDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDisconnectWebSocketDelegate_DelegateWrapper(const FMulticastScriptDelegate& DisconnectWebSocketDelegate, const FString& Message)
{
	struct _Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms
	{
		FString Message;
	};
	_Script_WuBiLiBiLiSDK_eventDisconnectWebSocketDelegate_Parms Parms;
	Parms.Message=Message;
	DisconnectWebSocketDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x93\xbe\xe6\x8e\xa5\xe6\x88\x90\xe5\x8a\x9f\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xbd\x93\xe9\x93\xbe\xe6\x8e\xa5""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x88\x90\xe5\x8a\x9f\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x93\xbe\xe6\x8e\xa5\xe6\x88\x90\xe5\x8a\x9f\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xbd\x93\xe9\x93\xbe\xe6\x8e\xa5""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x88\x90\xe5\x8a\x9f\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "LinkSuccessDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLinkSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& LinkSuccessDelegate)
{
	LinkSuccessDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe8\xbf\x99\xe4\xb8\xaa\xe5\xa7\x94\xe6\x89\x98\xe6\x98\xaf\xe6\x89\x8b\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe9\x93\xbe\xe6\x8e\xa5\xe8\xaf\xb7\xe6\xb1\x82\xe3\x80\x82\xe4\xb8\x94\xe6\x94\xb6\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x81\x9c\xe6\xad\xa2\xe8\xaf\xb7\xe6\xb1\x82\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\xe6\x97\xb6\xe3\x80\x82\xe6\x89\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe8\xb0\x83\xe7\x94\xa8\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x89\x8b\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xe8\xaf\xb7\xe6\xb1\x82\xe3\x80\x82\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x90\x91\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe5\x90\x91\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xb0\x83\xe7\x94\xa8\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x99\xe4\xb8\xaa\xe5\xa7\x94\xe6\x89\x98\xe6\x98\xaf\xe6\x89\x8b\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe9\x93\xbe\xe6\x8e\xa5\xe8\xaf\xb7\xe6\xb1\x82\xe3\x80\x82\xe4\xb8\x94\xe6\x94\xb6\xe5\x88\xb0\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x81\x9c\xe6\xad\xa2\xe8\xaf\xb7\xe6\xb1\x82\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\xe6\x97\xb6\xe3\x80\x82\xe6\x89\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe8\xb0\x83\xe7\x94\xa8\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xef\xbc\x8c\xe6\xb2\xa1\xe6\x9c\x89\xe6\x89\x8b\xe5\x8a\xa8\xe5\x8f\x91\xe9\x80\x81\xe8\xaf\xb7\xe6\xb1\x82\xe3\x80\x82\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe5\x90\x91\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe5\x90\x91\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe7\x9a\x84\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xb0\x83\xe7\x94\xa8\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "EndDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndDelegate)
{
	EndDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms
		{
			FDanMu DanMu;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DanMu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::NewProp_DanMu = { "DanMu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms, DanMu), Z_Construct_UScriptStruct_FDanMu, METADATA_PARAMS(0, nullptr) }; // 3482871436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::NewProp_DanMu,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98\xe6\x98\xaf\xe6\x94\xb6\xe5\x88\xb0\xe5\xbc\xb9\xe5\xb9\x95\xe6\x97\xb6\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98\n*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xad\xa4\xe5\xa7\x94\xe6\x89\x98\xe6\x98\xaf\xe6\x94\xb6\xe5\x88\xb0\xe5\xbc\xb9\xe5\xb9\x95\xe6\x97\xb6\xe7\x9a\x84\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "DanMuDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDanMuDelegate_DelegateWrapper(const FMulticastScriptDelegate& DanMuDelegate, FDanMu DanMu)
{
	struct _Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms
	{
		FDanMu DanMu;
	};
	_Script_WuBiLiBiLiSDK_eventDanMuDelegate_Parms Parms;
	Parms.DanMu=DanMu;
	DanMuDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms
		{
			FGift Gift;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gift;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::NewProp_Gift = { "Gift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms, Gift), Z_Construct_UScriptStruct_FGift, METADATA_PARAMS(0, nullptr) }; // 523219222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::NewProp_Gift,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x94\xb6\xe5\x88\xb0\xe7\xa4\xbc\xe7\x89\xa9\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xb6\xe5\x88\xb0\xe7\xa4\xbc\xe7\x89\xa9\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "GiftDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGiftDelegate_DelegateWrapper(const FMulticastScriptDelegate& GiftDelegate, FGift Gift)
{
	struct _Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms
	{
		FGift Gift;
	};
	_Script_WuBiLiBiLiSDK_eventGiftDelegate_Parms Parms;
	Parms.Gift=Gift;
	GiftDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms
		{
			FSuperChat SuperChat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperChat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::NewProp_SuperChat = { "SuperChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms, SuperChat), Z_Construct_UScriptStruct_FSuperChat, METADATA_PARAMS(0, nullptr) }; // 2947039787
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::NewProp_SuperChat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "SuperChatDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSuperChatDelegate_DelegateWrapper(const FMulticastScriptDelegate& SuperChatDelegate, FSuperChat SuperChat)
{
	struct _Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms
	{
		FSuperChat SuperChat;
	};
	_Script_WuBiLiBiLiSDK_eventSuperChatDelegate_Parms Parms;
	Parms.SuperChat=SuperChat;
	SuperChatDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms
		{
			FSuperChatDelData SuperChatDelData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuperChatDelData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::NewProp_SuperChatDelData = { "SuperChatDelData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms, SuperChatDelData), Z_Construct_UScriptStruct_FSuperChatDelData, METADATA_PARAMS(0, nullptr) }; // 728445596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::NewProp_SuperChatDelData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80\xe4\xb8\x8b\xe7\xba\xbf\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x98\xe8\xb4\xb9\xe7\x95\x99\xe8\xa8\x80\xe4\xb8\x8b\xe7\xba\xbf" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "SuperChatDelDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSuperChatDelDelegate_DelegateWrapper(const FMulticastScriptDelegate& SuperChatDelDelegate, FSuperChatDelData SuperChatDelData)
{
	struct _Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms
	{
		FSuperChatDelData SuperChatDelData;
	};
	_Script_WuBiLiBiLiSDK_eventSuperChatDelDelegate_Parms Parms;
	Parms.SuperChatDelData=SuperChatDelData;
	SuperChatDelDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms
		{
			FGuard Guard;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::NewProp_Guard = { "Guard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms, Guard), Z_Construct_UScriptStruct_FGuard, METADATA_PARAMS(0, nullptr) }; // 2914258861
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::NewProp_Guard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\xa7\xe8\x88\xaa\xe6\xb5\xb7" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "GuardDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGuardDelegate_DelegateWrapper(const FMulticastScriptDelegate& GuardDelegate, FGuard Guard)
{
	struct _Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms
	{
		FGuard Guard;
	};
	_Script_WuBiLiBiLiSDK_eventGuardDelegate_Parms Parms;
	Parms.Guard=Guard;
	GuardDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics
	{
		struct _Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms
		{
			FLike Like;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Like;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::NewProp_Like = { "Like", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms, Like), Z_Construct_UScriptStruct_FLike, METADATA_PARAMS(0, nullptr) }; // 79982896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::NewProp_Like,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x82\xb9\xe8\xb5\x9e\n" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x82\xb9\xe8\xb5\x9e" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK, nullptr, "LikeDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::_Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLikeDelegate_DelegateWrapper(const FMulticastScriptDelegate& LikeDelegate, FLike Like)
{
	struct _Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms
	{
		FLike Like;
	};
	_Script_WuBiLiBiLiSDK_eventLikeDelegate_Parms Parms;
	Parms.Like=Like;
	LikeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UBiLiBiLiSubsystem::execislinkBiLiBiLi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->islinkBiLiBiLi();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBiLiBiLiSubsystem::execEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->End();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBiLiBiLiSubsystem::execstart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBiLiBiLiSubsystem::execinit)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_accessKeyId);
		P_GET_PROPERTY(FStrProperty,Z_Param_accessKeySecret);
		P_GET_PROPERTY(FInt64Property,Z_Param_appId);
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->init(Z_Param_accessKeyId,Z_Param_accessKeySecret,Z_Param_appId,Z_Param_code);
		P_NATIVE_END;
	}
	void UBiLiBiLiSubsystem::StaticRegisterNativesUBiLiBiLiSubsystem()
	{
		UClass* Class = UBiLiBiLiSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "End", &UBiLiBiLiSubsystem::execEnd },
			{ "init", &UBiLiBiLiSubsystem::execinit },
			{ "islinkBiLiBiLi", &UBiLiBiLiSubsystem::execislinkBiLiBiLi },
			{ "start", &UBiLiBiLiSubsystem::execstart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics::Function_MetaDataParams[] = {
		{ "Category", "WuBiLiBiLi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe7\xbb\x99""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe5\xb9\xb6\xe6\x96\xad\xe5\xbc\x80\xe9\x93\xbe\xe6\x8e\xa5\n\x09\xe8\x99\xbd\xe7\x84\xb6\xe6\xad\xa4\xe7\xb3\xbb\xe7\xbb\x9f\xe4\xbc\x9a\xe5\x9c\xa8\xe9\x80\x80\xe5\x87\xba\xe6\x97\xb6\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x99""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe9\x80\x80\xe5\x87\xba\xe6\xb6\x88\xe6\x81\xaf\xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8""B\xe7\xab\x99""End\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x89\xe3\x80\x82\xe4\xbd\x86\xe8\xbf\x99\xe6\x98\xaf\xe5\x85\x9c\xe5\xba\x95\xe6\x9c\xba\xe5\x88\xb6\xef\xbc\x88\xe5\x9b\xa0\xe5\x8f\xaf\xe8\x83\xbd\xe5\xad\x98\xe5\x9c\xa8\xe7\xbd\x91\xe7\xbb\x9c\xe6\xb3\xa2\xe5\x8a\xa8\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\xad\xa4\xe5\x85\x9c\xe5\xba\x95\xe6\x9c\xba\xe5\x88\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe7\x99\xbe\xe5\x88\x86\xe7\x99\xbe\xe6\x88\x90\xe5\x8a\x9f\xef\xbc\x89\xe3\x80\x82\n\x09\xe6\x89\x80\xe4\xbb\xa5\xe5\xbb\xba\xe8\xae\xae\xe5\x9c\xa8\xe9\x80\x80\xe5\x87\xba\xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4""End\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8""B\xe7\xab\x99""End\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x89\xef\xbc\x8c\xe8\xae\xb0\xe5\xbe\x97\xe6\x8f\x90\xe5\x89\x8d\xe7\xbb\x91\xe5\xae\x9a""EndEvent\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xbd\x93\xe6\x94\xb6\xe5\x88\xb0""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe5\x90\x8e\xef\xbc\x8c\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8""EndEvent\xe5\xa7\x94\xe6\x89\x98\xe3\x80\x82\xe7\x94\xb1""EndEvent\xe5\xa7\x94\xe6\x89\x98\xe7\xbb\x93\xe6\x9d\x9f\xe6\xb8\xb8\xe6\x88\x8f\n\x09\n\x09\xe5\x8f\xa6\xe5\xa4\x96\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x96\xad\xe5\xbc\x80""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe9\x93\xbe\xe6\x8e\xa5\xef\xbc\x8c\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x99""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe5\x81\x9c\xe6\xad\xa2\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe8\xaf\xb7\xe6\xb1\x82\xef\xbc\x8c\xe5\xb9\xb6\xe6\x96\xad\xe5\xbc\x80\xe9\x93\xbe\xe6\x8e\xa5\n\xe8\x99\xbd\xe7\x84\xb6\xe6\xad\xa4\xe7\xb3\xbb\xe7\xbb\x9f\xe4\xbc\x9a\xe5\x9c\xa8\xe9\x80\x80\xe5\x87\xba\xe6\x97\xb6\xef\xbc\x8c\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x99""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x8f\x91\xe9\x80\x81\xe9\x80\x80\xe5\x87\xba\xe6\xb6\x88\xe6\x81\xaf\xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8""B\xe7\xab\x99""End\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x89\xe3\x80\x82\xe4\xbd\x86\xe8\xbf\x99\xe6\x98\xaf\xe5\x85\x9c\xe5\xba\x95\xe6\x9c\xba\xe5\x88\xb6\xef\xbc\x88\xe5\x9b\xa0\xe5\x8f\xaf\xe8\x83\xbd\xe5\xad\x98\xe5\x9c\xa8\xe7\xbd\x91\xe7\xbb\x9c\xe6\xb3\xa2\xe5\x8a\xa8\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe6\x89\x80\xe4\xbb\xa5\xe6\xad\xa4\xe5\x85\x9c\xe5\xba\x95\xe6\x9c\xba\xe5\x88\xb6\xe4\xb8\x8d\xe4\xbc\x9a\xe7\x99\xbe\xe5\x88\x86\xe7\x99\xbe\xe6\x88\x90\xe5\x8a\x9f\xef\xbc\x89\xe3\x80\x82\n\xe6\x89\x80\xe4\xbb\xa5\xe5\xbb\xba\xe8\xae\xae\xe5\x9c\xa8\xe9\x80\x80\xe5\x87\xba\xe6\x97\xb6\xef\xbc\x8c\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4""End\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe8\xb0\x83\xe7\x94\xa8""B\xe7\xab\x99""End\xe6\x8e\xa5\xe5\x8f\xa3\xef\xbc\x89\xef\xbc\x8c\xe8\xae\xb0\xe5\xbe\x97\xe6\x8f\x90\xe5\x89\x8d\xe7\xbb\x91\xe5\xae\x9a""EndEvent\xe5\xa7\x94\xe6\x89\x98\xef\xbc\x8c\xe5\xbd\x93\xe6\x94\xb6\xe5\x88\xb0""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe5\x9b\x9e\xe5\xa4\x8d\xe5\x90\x8e\xef\xbc\x8c\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe8\xb0\x83\xe7\x94\xa8""EndEvent\xe5\xa7\x94\xe6\x89\x98\xe3\x80\x82\xe7\x94\xb1""EndEvent\xe5\xa7\x94\xe6\x89\x98\xe7\xbb\x93\xe6\x9d\x9f\xe6\xb8\xb8\xe6\x88\x8f\n\n\xe5\x8f\xa6\xe5\xa4\x96\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x96\xad\xe5\xbc\x80""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe9\x93\xbe\xe6\x8e\xa5\xef\xbc\x8c\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBiLiBiLiSubsystem, nullptr, "End", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBiLiBiLiSubsystem_End()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBiLiBiLiSubsystem_End_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics
	{
		struct BiLiBiLiSubsystem_eventinit_Parms
		{
			FString accessKeyId;
			FString accessKeySecret;
			int64 appId;
			FString code;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_accessKeyId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_accessKeySecret;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_appId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_accessKeyId = { "accessKeyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiLiBiLiSubsystem_eventinit_Parms, accessKeyId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_accessKeySecret = { "accessKeySecret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiLiBiLiSubsystem_eventinit_Parms, accessKeySecret), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_appId = { "appId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiLiBiLiSubsystem_eventinit_Parms, appId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BiLiBiLiSubsystem_eventinit_Parms, code), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_accessKeyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_accessKeySecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_appId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::NewProp_code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::Function_MetaDataParams[] = {
		{ "Category", "WuBiLiBiLi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\n\x09@param accessKeyID - \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85ID\xe3\x80\x82\xe8\xaf\xb7\xe5\x8e\xbb""B\xe7\xab\x99\xe5\xbc\x80\xe6\x94\xbe\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x94\xb3\xe8\xaf\xb7\xe3\x80\x82\xe7\x94\xb3\xe8\xaf\xb7\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x8c\xe5\x92\x8c\xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xaf\x86\xe9\x92\xa5\xe4\xb8\x80\xe5\xb9\xb6\xe5\x8f\x91\xe6\x94\xbe\n\x09@param accessKeySecret - \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xaf\x86\xe9\x92\xa5\xe3\x80\x82\xe8\xaf\xb7\xe5\x8e\xbb""B\xe7\xab\x99\xe5\xbc\x80\xe6\x94\xbe\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x94\xb3\xe8\xaf\xb7\xe3\x80\x82\xe7\x94\xb3\xe8\xaf\xb7\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x8c\xe5\x92\x8c\xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85ID\xe4\xb8\x80\xe5\xb9\xb6\xe5\x8f\x91\xe6\x94\xbe\n\x09@param appID - \xe9\xa1\xb9\xe7\x9b\xaeID\xef\xbc\x8c\xe8\xaf\xb7\xe6\x96\xb0\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe9\xa1\xb9\xe7\x9b\xae\xef\xbc\x8c\xe8\xae\xbe\xe4\xb8\xba\xe4\xba\x92\xe5\x8a\xa8\xe7\x8e\xa9\xe6\xb3\x95\xef\xbc\x88\xe5\x8f\xaa\xe6\x96\xb0\xe5\xbb\xba\xe5\xb0\xb1\xe5\xa5\xbd\xef\xbc\x8c\xe6\x97\xa0\xe9\x9c\x80\xe6\x8f\x90\xe4\xba\xa4\xe5\xae\xa1\xe6\xa0\xb8\xef\xbc\x89\xe3\x80\x82\xe7\x84\xb6\xe5\x90\x8e\xe6\x8b\xb7\xe8\xb4\x9d\xe9\xa1\xb9\xe7\x9b\xaeID\xe5\x88\xb0\xe8\xbf\x99\xe9\x87\x8c\xe3\x80\x82\n\x09@param code - \xe8\xba\xab\xe4\xbb\xbd\xe7\xa0\x81\xe3\x80\x82\xe7\x9b\xb4\xe6\x92\xad\xe4\xb8\xad\xe5\xbf\x83 (opens new window)> \xe6\x88\x91\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4 > \xe5\xbc\x80\xe5\xa7\x8b\xe7\x9b\xb4\xe6\x92\xad > \xe8\xba\xab\xe4\xbb\xbd\xe7\xa0\x81\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\n@param accessKeyID - \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85ID\xe3\x80\x82\xe8\xaf\xb7\xe5\x8e\xbb""B\xe7\xab\x99\xe5\xbc\x80\xe6\x94\xbe\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x94\xb3\xe8\xaf\xb7\xe3\x80\x82\xe7\x94\xb3\xe8\xaf\xb7\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x8c\xe5\x92\x8c\xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xaf\x86\xe9\x92\xa5\xe4\xb8\x80\xe5\xb9\xb6\xe5\x8f\x91\xe6\x94\xbe\n@param accessKeySecret - \xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85\xe5\xaf\x86\xe9\x92\xa5\xe3\x80\x82\xe8\xaf\xb7\xe5\x8e\xbb""B\xe7\xab\x99\xe5\xbc\x80\xe6\x94\xbe\xe5\xb9\xb3\xe5\x8f\xb0\xe7\x94\xb3\xe8\xaf\xb7\xe3\x80\x82\xe7\x94\xb3\xe8\xaf\xb7\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x8e\xef\xbc\x8c\xe5\x92\x8c\xe5\xbc\x80\xe5\x8f\x91\xe8\x80\x85ID\xe4\xb8\x80\xe5\xb9\xb6\xe5\x8f\x91\xe6\x94\xbe\n@param appID - \xe9\xa1\xb9\xe7\x9b\xaeID\xef\xbc\x8c\xe8\xaf\xb7\xe6\x96\xb0\xe5\xbb\xba\xe4\xb8\x80\xe4\xb8\xaa\xe9\xa1\xb9\xe7\x9b\xae\xef\xbc\x8c\xe8\xae\xbe\xe4\xb8\xba\xe4\xba\x92\xe5\x8a\xa8\xe7\x8e\xa9\xe6\xb3\x95\xef\xbc\x88\xe5\x8f\xaa\xe6\x96\xb0\xe5\xbb\xba\xe5\xb0\xb1\xe5\xa5\xbd\xef\xbc\x8c\xe6\x97\xa0\xe9\x9c\x80\xe6\x8f\x90\xe4\xba\xa4\xe5\xae\xa1\xe6\xa0\xb8\xef\xbc\x89\xe3\x80\x82\xe7\x84\xb6\xe5\x90\x8e\xe6\x8b\xb7\xe8\xb4\x9d\xe9\xa1\xb9\xe7\x9b\xaeID\xe5\x88\xb0\xe8\xbf\x99\xe9\x87\x8c\xe3\x80\x82\n@param code - \xe8\xba\xab\xe4\xbb\xbd\xe7\xa0\x81\xe3\x80\x82\xe7\x9b\xb4\xe6\x92\xad\xe4\xb8\xad\xe5\xbf\x83 (opens new window)> \xe6\x88\x91\xe7\x9a\x84\xe7\x9b\xb4\xe6\x92\xad\xe9\x97\xb4 > \xe5\xbc\x80\xe5\xa7\x8b\xe7\x9b\xb4\xe6\x92\xad > \xe8\xba\xab\xe4\xbb\xbd\xe7\xa0\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBiLiBiLiSubsystem, nullptr, "init", nullptr, nullptr, Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::BiLiBiLiSubsystem_eventinit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::BiLiBiLiSubsystem_eventinit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBiLiBiLiSubsystem_init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBiLiBiLiSubsystem_init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics
	{
		struct BiLiBiLiSubsystem_eventislinkBiLiBiLi_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BiLiBiLiSubsystem_eventislinkBiLiBiLi_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BiLiBiLiSubsystem_eventislinkBiLiBiLi_Parms), &Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::Function_MetaDataParams[] = {
		{ "Category", "WuBiLiBiLi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe8\xbf\x94\xe5\x9b\x9e""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe9\x93\xbe\xe6\x8e\xa5\xe3\x80\x82\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e""B\xe7\xab\x99\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f\xe9\x93\xbe\xe6\x8e\xa5\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBiLiBiLiSubsystem, nullptr, "islinkBiLiBiLi", nullptr, nullptr, Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::BiLiBiLiSubsystem_eventislinkBiLiBiLi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::BiLiBiLiSubsystem_eventislinkBiLiBiLi_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics::Function_MetaDataParams[] = {
		{ "Category", "WuBiLiBiLi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xe5\xbc\x80\xe5\xa7\x8b\xe5\xb0\x9d\xe8\xaf\x95\xe9\x93\xbe\xe6\x8e\xa5\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8\xe9\x93\xbe\xe6\x8e\xa5\xe4\xb9\x8b\xe5\x89\x8d\xef\xbc\x8c\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbd\xbf\xe7\x94\xa8init\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xba\x86\xe3\x80\x82\n\x09\xe5\xb0\x86\xe4\xbc\x9a\xe5\x85\x88\xe4\xbb\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe9\x89\xb4\xe6\x9d\x83\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\xe6\x88\x90\xe5\x8a\x9f\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x8e\xef\xbc\x8c\xe5\xb0\xb1\xe5\xbb\xba\xe7\xab\x8bWebSocket\xe9\x95\xbf\xe9\x93\xbe\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\xa7\x8b\xe5\xb0\x9d\xe8\xaf\x95\xe9\x93\xbe\xe6\x8e\xa5\xef\xbc\x8c\xe8\xaf\xb7\xe5\x9c\xa8\xe9\x93\xbe\xe6\x8e\xa5\xe4\xb9\x8b\xe5\x89\x8d\xef\xbc\x8c\xe7\xa1\xae\xe4\xbf\x9d\xe4\xbd\xbf\xe7\x94\xa8init\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xba\x86\xe3\x80\x82\n\xe5\xb0\x86\xe4\xbc\x9a\xe5\x85\x88\xe4\xbb\x8e\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\x8e\xb7\xe5\x8f\x96\xe9\x89\xb4\xe6\x9d\x83\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\xe6\x88\x90\xe5\x8a\x9f\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x8e\xef\xbc\x8c\xe5\xb0\xb1\xe5\xbb\xba\xe7\xab\x8bWebSocket\xe9\x95\xbf\xe9\x93\xbe" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBiLiBiLiSubsystem, nullptr, "start", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBiLiBiLiSubsystem_start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBiLiBiLiSubsystem_start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBiLiBiLiSubsystem);
	UClass* Z_Construct_UClass_UBiLiBiLiSubsystem_NoRegister()
	{
		return UBiLiBiLiSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBiLiBiLiSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisconnectWebSocketEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DisconnectWebSocketEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DanMuEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DanMuEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GiftEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GiftEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperChatEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SuperChatEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperChatDelEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SuperChatDelEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GuardEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GuardEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LikeEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LikeEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkSuccessEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LinkSuccessEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WuBiLiBiLiSDK,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBiLiBiLiSubsystem_End, "End" }, // 227425733
		{ &Z_Construct_UFunction_UBiLiBiLiSubsystem_init, "init" }, // 676384704
		{ &Z_Construct_UFunction_UBiLiBiLiSubsystem_islinkBiLiBiLi, "islinkBiLiBiLi" }, // 3179840322
		{ &Z_Construct_UFunction_UBiLiBiLiSubsystem_start, "start" }, // 3643818430
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BiLiBiLiSubsystem.h" },
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_ErrorEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_ErrorEvent = { "ErrorEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, ErrorEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_ErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_ErrorEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_ErrorEvent_MetaData) }; // 18412986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DisconnectWebSocketEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DisconnectWebSocketEvent = { "DisconnectWebSocketEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, DisconnectWebSocketEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DisconnectWebSocketDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DisconnectWebSocketEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DisconnectWebSocketEvent_MetaData) }; // 3468504050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_EndEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_EndEvent = { "EndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, EndEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_EndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_EndEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_EndEvent_MetaData) }; // 3310922655
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DanMuEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DanMuEvent = { "DanMuEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, DanMuEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_DanMuDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DanMuEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DanMuEvent_MetaData) }; // 143240197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GiftEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GiftEvent = { "GiftEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, GiftEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GiftDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GiftEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GiftEvent_MetaData) }; // 4272024788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatEvent = { "SuperChatEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, SuperChatEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatEvent_MetaData) }; // 797601227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatDelEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatDelEvent = { "SuperChatDelEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, SuperChatDelEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_SuperChatDelDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatDelEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatDelEvent_MetaData) }; // 3494978363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GuardEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GuardEvent = { "GuardEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, GuardEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_GuardDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GuardEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GuardEvent_MetaData) }; // 4102013018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LikeEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LikeEvent = { "LikeEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, LikeEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LikeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LikeEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LikeEvent_MetaData) }; // 3353735227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LinkSuccessEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BiLiBiLiSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LinkSuccessEvent = { "LinkSuccessEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBiLiBiLiSubsystem, LinkSuccessEvent), Z_Construct_UDelegateFunction_WuBiLiBiLiSDK_LinkSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LinkSuccessEvent_MetaData), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LinkSuccessEvent_MetaData) }; // 2705487935
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_ErrorEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DisconnectWebSocketEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_EndEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_DanMuEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GiftEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_SuperChatDelEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_GuardEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LikeEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::NewProp_LinkSuccessEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBiLiBiLiSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::ClassParams = {
		&UBiLiBiLiSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBiLiBiLiSubsystem()
	{
		if (!Z_Registration_Info_UClass_UBiLiBiLiSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBiLiBiLiSubsystem.OuterSingleton, Z_Construct_UClass_UBiLiBiLiSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBiLiBiLiSubsystem.OuterSingleton;
	}
	template<> WUBILIBILISDK_API UClass* StaticClass<UBiLiBiLiSubsystem>()
	{
		return UBiLiBiLiSubsystem::StaticClass();
	}
	UBiLiBiLiSubsystem::UBiLiBiLiSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBiLiBiLiSubsystem);
	UBiLiBiLiSubsystem::~UBiLiBiLiSubsystem() {}
	struct Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBiLiBiLiSubsystem, UBiLiBiLiSubsystem::StaticClass, TEXT("UBiLiBiLiSubsystem"), &Z_Registration_Info_UClass_UBiLiBiLiSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBiLiBiLiSubsystem), 1019302340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_1674203050(TEXT("/Script/WuBiLiBiLiSDK"),
		Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
