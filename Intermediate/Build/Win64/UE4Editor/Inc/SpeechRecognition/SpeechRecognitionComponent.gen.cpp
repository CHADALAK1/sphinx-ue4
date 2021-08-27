// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognition/Public/SpeechRecognitionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognitionComponent() {}
// Cross Module References
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionComponent_NoRegister();
	SPEECHRECOGNITION_API UClass* Z_Construct_UClass_USpeechRecognitionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "UnknownPhraseSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics
	{
		struct _Script_SpeechRecognition_eventWordsSpokenSignature_Parms
		{
			FRecognisedPhrases Text;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms, Text), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "WordsSpokenSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpeechRecognition_eventWordsSpokenSignature_Parms), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StoppedSpeakingSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition, nullptr, "StartedSpeakingSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execStoppedSpeaking_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StoppedSpeaking_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execStartedSpeaking_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartedSpeaking_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execUnknownPhrase_method)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnknownPhrase_method();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execWordsSpoken_method)
	{
		P_GET_STRUCT(FRecognisedPhrases,Z_Param_phrases);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WordsSpoken_method(Z_Param_phrases);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execSetConfigParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_param);
		P_GET_ENUM(ESpeechRecognitionParamType,Z_Param_type);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetConfigParam(Z_Param_param,ESpeechRecognitionParamType(Z_Param_type),Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execInit)
	{
		P_GET_ENUM(ESpeechRecognitionLanguage,Z_Param_language);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Init(ESpeechRecognitionLanguage(Z_Param_language));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execGetCurrentVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execEnableLanguageModel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_languageModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableLanguageModel(Z_Param_languageModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execEnableGrammarMode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_grammarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableGrammarMode(Z_Param_grammarName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechRecognitionComponent::execEnableKeywordMode)
	{
		P_GET_TARRAY(FRecognitionPhrase,Z_Param_wordList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableKeywordMode(Z_Param_wordList);
		P_NATIVE_END;
	}
	void USpeechRecognitionComponent::StaticRegisterNativesUSpeechRecognitionComponent()
	{
		UClass* Class = USpeechRecognitionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableGrammarMode", &USpeechRecognitionComponent::execEnableGrammarMode },
			{ "EnableKeywordMode", &USpeechRecognitionComponent::execEnableKeywordMode },
			{ "EnableLanguageModel", &USpeechRecognitionComponent::execEnableLanguageModel },
			{ "GetCurrentVolume", &USpeechRecognitionComponent::execGetCurrentVolume },
			{ "Init", &USpeechRecognitionComponent::execInit },
			{ "SetConfigParam", &USpeechRecognitionComponent::execSetConfigParam },
			{ "Shutdown", &USpeechRecognitionComponent::execShutdown },
			{ "StartedSpeaking_method", &USpeechRecognitionComponent::execStartedSpeaking_method },
			{ "StoppedSpeaking_method", &USpeechRecognitionComponent::execStoppedSpeaking_method },
			{ "UnknownPhrase_method", &USpeechRecognitionComponent::execUnknownPhrase_method },
			{ "WordsSpoken_method", &USpeechRecognitionComponent::execWordsSpoken_method },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics
	{
		struct SpeechRecognitionComponent_eventEnableGrammarMode_Parms
		{
			FString grammarName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_grammarName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_grammarName = { "grammarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventEnableGrammarMode_Parms, grammarName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventEnableGrammarMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventEnableGrammarMode_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_grammarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Enable Grammar Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "EnableGrammarMode", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventEnableGrammarMode_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics
	{
		struct SpeechRecognitionComponent_eventEnableKeywordMode_Parms
		{
			TArray<FRecognitionPhrase> wordList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_wordList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_wordList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_wordList_Inner = { "wordList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecognitionPhrase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_wordList = { "wordList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventEnableKeywordMode_Parms, wordList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventEnableKeywordMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventEnableKeywordMode_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_wordList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_wordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "//Methods to switch recognition modes\n" },
		{ "DisplayName", "Enable Keyword Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
		{ "ToolTip", "Methods to switch recognition modes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "EnableKeywordMode", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventEnableKeywordMode_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics
	{
		struct SpeechRecognitionComponent_eventEnableLanguageModel_Parms
		{
			FString languageModel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_languageModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_languageModel = { "languageModel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventEnableLanguageModel_Parms, languageModel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventEnableLanguageModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventEnableLanguageModel_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_languageModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Enable Language Model Mode" },
		{ "Keywords", "Speech Recognition Mode" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "EnableLanguageModel", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventEnableLanguageModel_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics
	{
		struct SpeechRecognitionComponent_eventGetCurrentVolume_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventGetCurrentVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "// Basic functions \n" },
		{ "DisplayName", "GetCurrentVolume" },
		{ "Keywords", "Speech Recognition Volume" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
		{ "ToolTip", "Basic functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "GetCurrentVolume", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventGetCurrentVolume_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics
	{
		struct SpeechRecognitionComponent_eventInit_Parms
		{
			ESpeechRecognitionLanguage language;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_language_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_language;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventInit_Parms, language), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventInit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventInit_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_language_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Init" },
		{ "Keywords", "Speech Recognition Init" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "Init", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventInit_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics
	{
		struct SpeechRecognitionComponent_eventSetConfigParam_Parms
		{
			FString param;
			ESpeechRecognitionParamType type;
			FString value;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_param;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventSetConfigParam_Parms, param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventSetConfigParam_Parms, type), Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventSetConfigParam_Parms, value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventSetConfigParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventSetConfigParam_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "SetConfigParam" },
		{ "Keywords", "Speech Recognition Set Config Param" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "SetConfigParam", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventSetConfigParam_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics
	{
		struct SpeechRecognitionComponent_eventShutdown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechRecognitionComponent_eventShutdown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpeechRecognitionComponent_eventShutdown_Parms), &Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "Shutdown" },
		{ "Keywords", "Speech Recognition Shutdown" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "Shutdown", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventShutdown_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "StartedSpeaking_method", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "StoppedSpeaking_method", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "UnknownPhrase_method", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics
	{
		struct SpeechRecognitionComponent_eventWordsSpoken_method_Parms
		{
			FRecognisedPhrases phrases;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_phrases;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpeechRecognitionComponent_eventWordsSpoken_method_Parms, phrases), Z_Construct_UScriptStruct_FRecognisedPhrases, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::NewProp_phrases,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callback events\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
		{ "ToolTip", "Callback events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechRecognitionComponent, nullptr, "WordsSpoken_method", nullptr, nullptr, sizeof(SpeechRecognitionComponent_eventWordsSpoken_method_Parms), Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpeechRecognitionComponent_NoRegister()
	{
		return USpeechRecognitionComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpeechRecognitionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWordsSpoken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWordsSpoken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnUnknownPhrase_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnknownPhrase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStartedSpeaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartedSpeaking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStoppedSpeaking_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStoppedSpeaking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeechRecognitionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpeechRecognitionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_EnableGrammarMode, "EnableGrammarMode" }, // 3912959334
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_EnableKeywordMode, "EnableKeywordMode" }, // 2891689206
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_EnableLanguageModel, "EnableLanguageModel" }, // 3193815060
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_GetCurrentVolume, "GetCurrentVolume" }, // 3257278677
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_Init, "Init" }, // 534682335
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_SetConfigParam, "SetConfigParam" }, // 3687527075
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_Shutdown, "Shutdown" }, // 3732209035
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_StartedSpeaking_method, "StartedSpeaking_method" }, // 3463211565
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_StoppedSpeaking_method, "StoppedSpeaking_method" }, // 4126501407
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_UnknownPhrase_method, "UnknownPhrase_method" }, // 1152503130
		{ &Z_Construct_UFunction_USpeechRecognitionComponent_WordsSpoken_method, "WordsSpoken_method" }, // 898420507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeechRecognitionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnWordsSpoken_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnWordsSpoken = { "OnWordsSpoken", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechRecognitionComponent, OnWordsSpoken), Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnWordsSpoken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnWordsSpoken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnUnknownPhrase_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnUnknownPhrase = { "OnUnknownPhrase", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechRecognitionComponent, OnUnknownPhrase), Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnUnknownPhrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnUnknownPhrase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStartedSpeaking_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStartedSpeaking = { "OnStartedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechRecognitionComponent, OnStartedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStartedSpeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStartedSpeaking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStoppedSpeaking_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpeechRecognitionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStoppedSpeaking = { "OnStoppedSpeaking", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeechRecognitionComponent, OnStoppedSpeaking), Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStoppedSpeaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStoppedSpeaking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeechRecognitionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnWordsSpoken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnUnknownPhrase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStartedSpeaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeechRecognitionComponent_Statics::NewProp_OnStoppedSpeaking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeechRecognitionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechRecognitionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeechRecognitionComponent_Statics::ClassParams = {
		&USpeechRecognitionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpeechRecognitionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpeechRecognitionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechRecognitionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeechRecognitionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeechRecognitionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeechRecognitionComponent, 1617606613);
	template<> SPEECHRECOGNITION_API UClass* StaticClass<USpeechRecognitionComponent>()
	{
		return USpeechRecognitionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeechRecognitionComponent(Z_Construct_UClass_USpeechRecognitionComponent, &USpeechRecognitionComponent::StaticClass, TEXT("/Script/SpeechRecognition"), TEXT("USpeechRecognitionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechRecognitionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
