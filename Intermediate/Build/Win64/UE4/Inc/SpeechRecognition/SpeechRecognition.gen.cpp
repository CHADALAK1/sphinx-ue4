// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpeechRecognition/Public/SpeechRecognition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition() {}
// Cross Module References
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType();
	SPEECHRECOGNITION_API UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase();
	SPEECHRECOGNITION_API UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases();
// End Cross Module References
	static UEnum* EPhraseRecognitionTolerance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("EPhraseRecognitionTolerance"));
		}
		return Singleton;
	}
	template<> SPEECHRECOGNITION_API UEnum* StaticEnum<EPhraseRecognitionTolerance>()
	{
		return EPhraseRecognitionTolerance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPhraseRecognitionTolerance(EPhraseRecognitionTolerance_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("EPhraseRecognitionTolerance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Hash() { return 1264500878U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPhraseRecognitionTolerance"), 0, Get_Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPhraseRecognitionTolerance::VE_1", (int64)EPhraseRecognitionTolerance::VE_1 },
				{ "EPhraseRecognitionTolerance::VE_2", (int64)EPhraseRecognitionTolerance::VE_2 },
				{ "EPhraseRecognitionTolerance::VE_3", (int64)EPhraseRecognitionTolerance::VE_3 },
				{ "EPhraseRecognitionTolerance::VE_4", (int64)EPhraseRecognitionTolerance::VE_4 },
				{ "EPhraseRecognitionTolerance::VE_5", (int64)EPhraseRecognitionTolerance::VE_5 },
				{ "EPhraseRecognitionTolerance::VE_6", (int64)EPhraseRecognitionTolerance::VE_6 },
				{ "EPhraseRecognitionTolerance::VE_7", (int64)EPhraseRecognitionTolerance::VE_7 },
				{ "EPhraseRecognitionTolerance::VE_8", (int64)EPhraseRecognitionTolerance::VE_8 },
				{ "EPhraseRecognitionTolerance::VE_9", (int64)EPhraseRecognitionTolerance::VE_9 },
				{ "EPhraseRecognitionTolerance::VE_10", (int64)EPhraseRecognitionTolerance::VE_10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_1.DisplayName", "V1" },
				{ "VE_1.Name", "EPhraseRecognitionTolerance::VE_1" },
				{ "VE_10.DisplayName", "V10" },
				{ "VE_10.Name", "EPhraseRecognitionTolerance::VE_10" },
				{ "VE_2.DisplayName", "V2" },
				{ "VE_2.Name", "EPhraseRecognitionTolerance::VE_2" },
				{ "VE_3.DisplayName", "V3" },
				{ "VE_3.Name", "EPhraseRecognitionTolerance::VE_3" },
				{ "VE_4.DisplayName", "V4" },
				{ "VE_4.Name", "EPhraseRecognitionTolerance::VE_4" },
				{ "VE_5.DisplayName", "V5" },
				{ "VE_5.Name", "EPhraseRecognitionTolerance::VE_5" },
				{ "VE_6.DisplayName", "V6" },
				{ "VE_6.Name", "EPhraseRecognitionTolerance::VE_6" },
				{ "VE_7.DisplayName", "V7" },
				{ "VE_7.Name", "EPhraseRecognitionTolerance::VE_7" },
				{ "VE_8.DisplayName", "V8" },
				{ "VE_8.Name", "EPhraseRecognitionTolerance::VE_8" },
				{ "VE_9.DisplayName", "V9" },
				{ "VE_9.Name", "EPhraseRecognitionTolerance::VE_9" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				"EPhraseRecognitionTolerance",
				"EPhraseRecognitionTolerance",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionLanguage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionLanguage"));
		}
		return Singleton;
	}
	template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionLanguage>()
	{
		return ESpeechRecognitionLanguage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionLanguage(ESpeechRecognitionLanguage_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionLanguage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Hash() { return 2922579416U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionLanguage"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionLanguage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionLanguage::VE_English", (int64)ESpeechRecognitionLanguage::VE_English },
				{ "ESpeechRecognitionLanguage::VE_Chinese", (int64)ESpeechRecognitionLanguage::VE_Chinese },
				{ "ESpeechRecognitionLanguage::VE_French", (int64)ESpeechRecognitionLanguage::VE_French },
				{ "ESpeechRecognitionLanguage::VE_Spanish", (int64)ESpeechRecognitionLanguage::VE_Spanish },
				{ "ESpeechRecognitionLanguage::VE_Russian", (int64)ESpeechRecognitionLanguage::VE_Russian },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_Chinese.DisplayName", "Chinese" },
				{ "VE_Chinese.Name", "ESpeechRecognitionLanguage::VE_Chinese" },
				{ "VE_English.DisplayName", "English" },
				{ "VE_English.Name", "ESpeechRecognitionLanguage::VE_English" },
				{ "VE_French.DisplayName", "French" },
				{ "VE_French.Name", "ESpeechRecognitionLanguage::VE_French" },
				{ "VE_Russian.DisplayName", "Russian" },
				{ "VE_Russian.Name", "ESpeechRecognitionLanguage::VE_Russian" },
				{ "VE_Spanish.DisplayName", "Spanish" },
				{ "VE_Spanish.Name", "ESpeechRecognitionLanguage::VE_Spanish" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				"ESpeechRecognitionLanguage",
				"ESpeechRecognitionLanguage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionParamType"));
		}
		return Singleton;
	}
	template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionParamType>()
	{
		return ESpeechRecognitionParamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionParamType(ESpeechRecognitionParamType_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Hash() { return 1949738155U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionParamType"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionParamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionParamType::VE_FLOAT", (int64)ESpeechRecognitionParamType::VE_FLOAT },
				{ "ESpeechRecognitionParamType::VE_BOOLEAN", (int64)ESpeechRecognitionParamType::VE_BOOLEAN },
				{ "ESpeechRecognitionParamType::VE_STRING", (int64)ESpeechRecognitionParamType::VE_STRING },
				{ "ESpeechRecognitionParamType::VE_INTEGER", (int64)ESpeechRecognitionParamType::VE_INTEGER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_BOOLEAN.DisplayName", "Boolean" },
				{ "VE_BOOLEAN.Name", "ESpeechRecognitionParamType::VE_BOOLEAN" },
				{ "VE_FLOAT.DisplayName", "Float" },
				{ "VE_FLOAT.Name", "ESpeechRecognitionParamType::VE_FLOAT" },
				{ "VE_INTEGER.DisplayName", "Integer" },
				{ "VE_INTEGER.Name", "ESpeechRecognitionParamType::VE_INTEGER" },
				{ "VE_STRING.DisplayName", "String" },
				{ "VE_STRING.Name", "ESpeechRecognitionParamType::VE_STRING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				"ESpeechRecognitionParamType",
				"ESpeechRecognitionParamType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeechRecognitionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("ESpeechRecognitionMode"));
		}
		return Singleton;
	}
	template<> SPEECHRECOGNITION_API UEnum* StaticEnum<ESpeechRecognitionMode>()
	{
		return ESpeechRecognitionMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeechRecognitionMode(ESpeechRecognitionMode_StaticEnum, TEXT("/Script/SpeechRecognition"), TEXT("ESpeechRecognitionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Hash() { return 1720243872U; }
	UEnum* Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeechRecognitionMode"), 0, Get_Z_Construct_UEnum_SpeechRecognition_ESpeechRecognitionMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpeechRecognitionMode::VE_KEYWORD", (int64)ESpeechRecognitionMode::VE_KEYWORD },
				{ "ESpeechRecognitionMode::VE_GRAMMAR", (int64)ESpeechRecognitionMode::VE_GRAMMAR },
				{ "ESpeechRecognitionMode::VE_LANGUAGE_MODEL", (int64)ESpeechRecognitionMode::VE_LANGUAGE_MODEL },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
				{ "VE_GRAMMAR.DisplayName", "Grammar" },
				{ "VE_GRAMMAR.Name", "ESpeechRecognitionMode::VE_GRAMMAR" },
				{ "VE_KEYWORD.DisplayName", "Keyword Spotting" },
				{ "VE_KEYWORD.Name", "ESpeechRecognitionMode::VE_KEYWORD" },
				{ "VE_LANGUAGE_MODEL.DisplayName", "Language Model" },
				{ "VE_LANGUAGE_MODEL.Name", "ESpeechRecognitionMode::VE_LANGUAGE_MODEL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpeechRecognition,
				nullptr,
				"ESpeechRecognitionMode",
				"ESpeechRecognitionMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRecognitionPhrase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPEECHRECOGNITION_API uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognitionPhrase, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognitionPhrase"), sizeof(FRecognitionPhrase), Get_Z_Construct_UScriptStruct_FRecognitionPhrase_Hash());
	}
	return Singleton;
}
template<> SPEECHRECOGNITION_API UScriptStruct* StaticStruct<FRecognitionPhrase>()
{
	return FRecognitionPhrase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecognitionPhrase(FRecognitionPhrase::StaticStruct, TEXT("/Script/SpeechRecognition"), TEXT("RecognitionPhrase"), false, nullptr, nullptr);
static struct FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase
{
	FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase()
	{
		UScriptStruct::DeferCppStructOps<FRecognitionPhrase>(FName(TEXT("RecognitionPhrase")));
	}
} ScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognitionPhrase;
	struct Z_Construct_UScriptStruct_FRecognitionPhrase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phrase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_phrase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tolerance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_tolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognitionPhrase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase_MetaData[] = {
		{ "Category", "RecognitionPhrase" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase = { "phrase", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecognitionPhrase, phrase), METADATA_PARAMS(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_MetaData[] = {
		{ "Category", "RecognitionPhrase" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance = { "tolerance", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecognitionPhrase, tolerance), Z_Construct_UEnum_SpeechRecognition_EPhraseRecognitionTolerance, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_phrase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::NewProp_tolerance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
		nullptr,
		&NewStructOps,
		"RecognitionPhrase",
		sizeof(FRecognitionPhrase),
		alignof(FRecognitionPhrase),
		Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecognitionPhrase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecognitionPhrase"), sizeof(FRecognitionPhrase), Get_Z_Construct_UScriptStruct_FRecognitionPhrase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecognitionPhrase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecognitionPhrase_Hash() { return 1225903728U; }
class UScriptStruct* FRecognisedPhrases::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPEECHRECOGNITION_API uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecognisedPhrases, Z_Construct_UPackage__Script_SpeechRecognition(), TEXT("RecognisedPhrases"), sizeof(FRecognisedPhrases), Get_Z_Construct_UScriptStruct_FRecognisedPhrases_Hash());
	}
	return Singleton;
}
template<> SPEECHRECOGNITION_API UScriptStruct* StaticStruct<FRecognisedPhrases>()
{
	return FRecognisedPhrases::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecognisedPhrases(FRecognisedPhrases::StaticStruct, TEXT("/Script/SpeechRecognition"), TEXT("RecognisedPhrases"), false, nullptr, nullptr);
static struct FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases
{
	FScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases()
	{
		UScriptStruct::DeferCppStructOps<FRecognisedPhrases>(FName(TEXT("RecognisedPhrases")));
	}
} ScriptStruct_SpeechRecognition_StaticRegisterNativesFRecognisedPhrases;
	struct Z_Construct_UScriptStruct_FRecognisedPhrases_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_phrases_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phrases_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_phrases;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Common structures and enumerations\n" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
		{ "ToolTip", "Common structures and enumerations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecognisedPhrases>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_Inner = { "phrases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_MetaData[] = {
		{ "Category", "RecognisedPhrases" },
		{ "ModuleRelativePath", "Public/SpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases = { "phrases", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecognisedPhrases, phrases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::NewProp_phrases,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpeechRecognition,
		nullptr,
		&NewStructOps,
		"RecognisedPhrases",
		sizeof(FRecognisedPhrases),
		alignof(FRecognisedPhrases),
		Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecognisedPhrases()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpeechRecognition();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecognisedPhrases"), sizeof(FRecognisedPhrases), Get_Z_Construct_UScriptStruct_FRecognisedPhrases_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecognisedPhrases_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecognisedPhrases_Hash() { return 2498861182U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
