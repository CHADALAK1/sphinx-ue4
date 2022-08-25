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
#ifdef SPEECHRECOGNITION_SpeechRecognitionActor_generated_h
#error "SpeechRecognitionActor.generated.h already included, missing '#pragma once' in SpeechRecognitionActor.h"
#endif
#define SPEECHRECOGNITION_SpeechRecognitionActor_generated_h

#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_13_DELEGATE \
static inline void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature) \
{ \
	UnknownPhraseSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_12_DELEGATE \
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


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_11_DELEGATE \
static inline void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature) \
{ \
	StoppedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_10_DELEGATE \
static inline void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature) \
{ \
	StartedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_SPARSE_DATA
#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_RPC_WRAPPERS \
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


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechRecognitionActor(); \
	friend struct Z_Construct_UClass_USpeechRecognitionActor_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognitionActor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognitionActor)


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSpeechRecognitionActor(); \
	friend struct Z_Construct_UClass_USpeechRecognitionActor_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognitionActor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognitionActor)


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognitionActor(USpeechRecognitionActor&&); \
	NO_API USpeechRecognitionActor(const USpeechRecognitionActor&); \
public:


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognitionActor(USpeechRecognitionActor&&); \
	NO_API USpeechRecognitionActor(const USpeechRecognitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognitionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognitionActor)


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_PRIVATE_PROPERTY_OFFSET
#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_15_PROLOG
#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_PRIVATE_PROPERTY_OFFSET \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_SPARSE_DATA \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_RPC_WRAPPERS \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_INCLASS \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_PRIVATE_PROPERTY_OFFSET \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_SPARSE_DATA \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_INCLASS_NO_PURE_DECLS \
	TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPEECHRECOGNITION_API UClass* StaticClass<class USpeechRecognitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheWorkV2_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
