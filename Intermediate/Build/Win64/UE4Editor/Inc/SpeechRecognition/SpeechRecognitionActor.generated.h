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

#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_12_DELEGATE \
static inline void FUnknownPhraseSignature_DelegateWrapper(const FMulticastScriptDelegate& UnknownPhraseSignature) \
{ \
	UnknownPhraseSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_11_DELEGATE \
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


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_10_DELEGATE \
static inline void FStoppedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StoppedSpeakingSignature) \
{ \
	StoppedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_9_DELEGATE \
static inline void FStartedSpeakingSignature_DelegateWrapper(const FMulticastScriptDelegate& StartedSpeakingSignature) \
{ \
	StartedSpeakingSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_SPARSE_DATA
#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS \
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


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeechRecognitionActor(); \
	friend struct Z_Construct_UClass_ASpeechRecognitionActor_Statics; \
public: \
	DECLARE_CLASS(ASpeechRecognitionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(ASpeechRecognitionActor)


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASpeechRecognitionActor(); \
	friend struct Z_Construct_UClass_ASpeechRecognitionActor_Statics; \
public: \
	DECLARE_CLASS(ASpeechRecognitionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpeechRecognition"), NO_API) \
	DECLARE_SERIALIZER(ASpeechRecognitionActor)


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeechRecognitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechRecognitionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechRecognitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechRecognitionActor(ASpeechRecognitionActor&&); \
	NO_API ASpeechRecognitionActor(const ASpeechRecognitionActor&); \
public:


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpeechRecognitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpeechRecognitionActor(ASpeechRecognitionActor&&); \
	NO_API ASpeechRecognitionActor(const ASpeechRecognitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeechRecognitionActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeechRecognitionActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpeechRecognitionActor)


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET
#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_14_PROLOG
#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_SPARSE_DATA \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_PRIVATE_PROPERTY_OFFSET \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_SPARSE_DATA \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_INCLASS_NO_PURE_DECLS \
	TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPEECHRECOGNITION_API UClass* StaticClass<class ASpeechRecognitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TheWork_Plugins_SpeechRecognition_Source_SpeechRecognition_Public_SpeechRecognitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
