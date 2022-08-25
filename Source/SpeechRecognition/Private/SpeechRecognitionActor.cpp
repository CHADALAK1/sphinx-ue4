#include "SpeechRecognitionActor.h"
#include "SpeechRecognition.h"

#define SPEECHRECOGNITIONPLUGIN ISpeechRecognition::Get()

bool USpeechRecognitionActor::Init(ESpeechRecognitionLanguage language)
{
	// terminate any existing thread
	if (listenerThread != NULL) {
		listenerThread->SetLanguage(language);
		return true;
	}

	// start listener thread
	listenerThread = new FSpeechRecognitionWorker();
	TArray<FRecognitionPhrase> dictionaryList;
	listenerThread->SetLanguage(language);
	bool threadSuccess = listenerThread->StartThread(this);
	return threadSuccess;
}

int32 USpeechRecognitionActor::GetCurrentVolume()
{
	if (listenerThread != NULL) {
		int16 returnVal = listenerThread->GetCurrentVolume();
		return returnVal;
	}
	return false;
}

bool USpeechRecognitionActor::SetConfigParam(FString param, ESpeechRecognitionParamType type, FString value)
{
	if (listenerThread != NULL) {
		bool returnVal = listenerThread->SetConfigParam(param, type, value);
		return returnVal;
	}
	return false;
}

bool USpeechRecognitionActor::Shutdown()
{
	if (listenerThread != NULL) {
		listenerThread->ShutDown();
		listenerThread = NULL;
		return true;
	}
	else{
		return false;
	}
}

/**************************
// Change recognition methods
**************************/
bool USpeechRecognitionActor::EnableKeywordMode(TArray<FRecognitionPhrase> wordList)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableKeywordMode(wordList);
	}
	return false;
}

bool USpeechRecognitionActor::EnableGrammarMode(FString grammarName)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableGrammarMode(grammarName);
	}
	return false;
}

bool USpeechRecognitionActor::EnableLanguageModel(FString languageModel)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableLanguageModel(languageModel);
	}
	return false;
}

/**************************
// Callback methods
**************************/
void USpeechRecognitionActor::WordsSpoken_trigger(FWordsSpokenSignature delegate_method, FRecognisedPhrases text)
{
	delegate_method.Broadcast(text);
}

void USpeechRecognitionActor::WordsSpoken_method(FRecognisedPhrases text)
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&WordsSpoken_trigger, OnWordsSpoken, text)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionActor::UnknownPhrase_trigger(FUnknownPhraseSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionActor::UnknownPhrase_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&UnknownPhrase_trigger, OnUnknownPhrase)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionActor::StartedSpeaking_trigger(FStartedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionActor::StartedSpeaking_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StartedSpeaking_trigger, OnStartedSpeaking)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}

void USpeechRecognitionActor::StoppedSpeaking_trigger(FStoppedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionActor::StoppedSpeaking_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
		(
			FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StoppedSpeaking_trigger, OnStoppedSpeaking)
			, TStatId()
			, nullptr
			, ENamedThreads::GameThread
			);
}
