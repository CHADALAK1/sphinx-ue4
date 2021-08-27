// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRecognisedPhrases;
enum class ESpeechRecognitionParamType : uint8;
enum class ESpeechRecognitionLanguage : uint8;
struct FRecognitionPhrase;
#ifdef SPEECHRECOGNITION_SpeechRecognitionComponent_generated_h
#error "SpeechRecognitionComponent.generated.h already included, missing '#pragma once' in SpeechRecognitionComponent.h"
#endif
#define SPEECHRECOGNITION_SpeechRecognitionComponent_generated_h

#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_13_DELEGATE \
static inline void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature) \
{ \
	UnknownPhraseSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_12_DELEGATE \
struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms \
{ \
	FRecognisedPhrases Text; \
}; \
static inline void FWordsSpokenSignature_DelegateWrapper(const FMulticastScriptDelegate& WordsSpokenSignature, FRecognisedPhrases Text) \
{ \
	_Script_SpeechRecognition_eventWordsSpokenSignature_Parms Parms; \
	Parms.Text=Text; \
	WordsSpokenSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_11_DELEGATE \
static inline void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature) \
{ \
	StoppedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_10_DELEGATE \
static inline void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature) \
{ \
	StartedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_SPARSE_DATA
#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStoppedSpeaking_method); \
	DECLARE_FUNCTION(execStartedSpeaking_method); \
	DECLARE_FUNCTION(execUnknownPhrase_method); \
	DECLARE_FUNCTION(execWordsSpoken_method); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetConfigParam); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetCurrentVolume); \
	DECLARE_FUNCTION(execEnableLanguageModel); \
	DECLARE_FUNCTION(execEnableGrammarMode); \
	DECLARE_FUNCTION(execEnableKeywordMode);


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStoppedSpeaking_method); \
	DECLARE_FUNCTION(execStartedSpeaking_method); \
	DECLARE_FUNCTION(execUnknownPhrase_method); \
	DECLARE_FUNCTION(execWordsSpoken_method); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execSetConfigParam); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetCurrentVolume); \
	DECLARE_FUNCTION(execEnableLanguageModel); \
	DECLARE_FUNCTION(execEnableGrammarMode); \
	DECLARE_FUNCTION(execEnableKeywordMode);


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechRecognitionComponent(); \
	friend struct Z_Construct_UClass_USpeechRecognitionComponent_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognitionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognitionComponent)


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSpeechRecognitionComponent(); \
	friend struct Z_Construct_UClass_USpeechRecognitionComponent_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognitionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognitionComponent)


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognitionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognitionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognitionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognitionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognitionComponent(USpeechRecognitionComponent&&); \
	NO_API USpeechRecognitionComponent(const USpeechRecognitionComponent&); \
public:


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognitionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognitionComponent(USpeechRecognitionComponent&&); \
	NO_API USpeechRecognitionComponent(const USpeechRecognitionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognitionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognitionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognitionComponent)


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_15_PROLOG
#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_SPARSE_DATA \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_RPC_WRAPPERS \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_INCLASS \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_SPARSE_DATA \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_INCLASS_NO_PURE_DECLS \
	ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPEECHRECOGNITION_API UClass* StaticClass<class USpeechRecognitionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForFunAgain_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
