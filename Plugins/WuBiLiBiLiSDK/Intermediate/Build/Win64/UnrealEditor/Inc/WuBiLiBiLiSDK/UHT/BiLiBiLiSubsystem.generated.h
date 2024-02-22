// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BiLiBiLiSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDanMu;
struct FGift;
struct FGuard;
struct FLike;
struct FSuperChat;
struct FSuperChatDelData;
#ifdef WUBILIBILISDK_BiLiBiLiSubsystem_generated_h
#error "BiLiBiLiSubsystem.generated.h already included, missing '#pragma once' in BiLiBiLiSubsystem.h"
#endif
#define WUBILIBILISDK_BiLiBiLiSubsystem_generated_h

#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_24_DELEGATE \
WUBILIBILISDK_API void FErrorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ErrorDelegate, int32 code, const FString& ErrorMessage);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_32_DELEGATE \
WUBILIBILISDK_API void FDisconnectWebSocketDelegate_DelegateWrapper(const FMulticastScriptDelegate& DisconnectWebSocketDelegate, const FString& Message);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_35_DELEGATE \
WUBILIBILISDK_API void FLinkSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& LinkSuccessDelegate);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_41_DELEGATE \
WUBILIBILISDK_API void FEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndDelegate);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_46_DELEGATE \
WUBILIBILISDK_API void FDanMuDelegate_DelegateWrapper(const FMulticastScriptDelegate& DanMuDelegate, FDanMu DanMu);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_49_DELEGATE \
WUBILIBILISDK_API void FGiftDelegate_DelegateWrapper(const FMulticastScriptDelegate& GiftDelegate, FGift Gift);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_52_DELEGATE \
WUBILIBILISDK_API void FSuperChatDelegate_DelegateWrapper(const FMulticastScriptDelegate& SuperChatDelegate, FSuperChat SuperChat);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_55_DELEGATE \
WUBILIBILISDK_API void FSuperChatDelDelegate_DelegateWrapper(const FMulticastScriptDelegate& SuperChatDelDelegate, FSuperChatDelData SuperChatDelData);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_58_DELEGATE \
WUBILIBILISDK_API void FGuardDelegate_DelegateWrapper(const FMulticastScriptDelegate& GuardDelegate, FGuard Guard);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_61_DELEGATE \
WUBILIBILISDK_API void FLikeDelegate_DelegateWrapper(const FMulticastScriptDelegate& LikeDelegate, FLike Like);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_SPARSE_DATA
#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execislinkBiLiBiLi); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execstart); \
	DECLARE_FUNCTION(execinit);


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_ACCESSORS
#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBiLiBiLiSubsystem(); \
	friend struct Z_Construct_UClass_UBiLiBiLiSubsystem_Statics; \
public: \
	DECLARE_CLASS(UBiLiBiLiSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WuBiLiBiLiSDK"), NO_API) \
	DECLARE_SERIALIZER(UBiLiBiLiSubsystem)


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBiLiBiLiSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBiLiBiLiSubsystem(UBiLiBiLiSubsystem&&); \
	NO_API UBiLiBiLiSubsystem(const UBiLiBiLiSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBiLiBiLiSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBiLiBiLiSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBiLiBiLiSubsystem) \
	NO_API virtual ~UBiLiBiLiSubsystem();


#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_66_PROLOG
#define FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_SPARSE_DATA \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_ACCESSORS \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_INCLASS_NO_PURE_DECLS \
	FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WUBILIBILISDK_API UClass* StaticClass<class UBiLiBiLiSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BiLiBiLiProject_Plugins_WuBiLiBiLiSDK_Source_WuBiLiBiLiSDK_Public_BiLiBiLiSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
