// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechRecognition_init() {}
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature();
	SPEECHRECOGNITION_API UFunction* Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpeechRecognition()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_StartedSpeakingSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_StoppedSpeakingSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_WordsSpokenSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpeechRecognition_UnknownPhraseSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpeechRecognition",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x56F95C80,
				0x753738DA,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
