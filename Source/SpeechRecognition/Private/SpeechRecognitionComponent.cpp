#include "SpeechRecognitionComponent.h"
#include "SpeechRecognition.h"

#define SPEECHRECOGNITIONPLUGIN ISpeechRecognition::Get()

bool USpeechRecognitionComponent::Init(ESpeechRecognitionLanguage language)
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

int32 USpeechRecognitionComponent::GetCurrentVolume()
{
	if (listenerThread != NULL) {
		int16 returnVal = listenerThread->GetCurrentVolume();
		return returnVal;
	}
	return false;
}

bool USpeechRecognitionComponent::SetConfigParam(FString param, ESpeechRecognitionParamType type, FString value)
{
	if (listenerThread != NULL) {
		bool returnVal = listenerThread->SetConfigParam(param, type, value);
		return returnVal;
	}
	return false;
}

bool USpeechRecognitionComponent::Shutdown()
{
	if (listenerThread != NULL) {
		listenerThread->ShutDown();
		listenerThread = NULL;
		return true;
	}
	else {
		return false;
	}
}

/**************************
// Change recognition methods
**************************/
bool USpeechRecognitionComponent::EnableKeywordMode(TArray<FRecognitionPhrase> wordList)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableKeywordMode(wordList);
	}
	return false;
}

bool USpeechRecognitionComponent::EnableGrammarMode(FString grammarName)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableGrammarMode(grammarName);
	}
	return false;
}

bool USpeechRecognitionComponent::EnableLanguageModel(FString languageModel)
{
	if (listenerThread != NULL) {
		return listenerThread->EnableLanguageModel(languageModel);
	}
	return false;
}

/**************************
// Callback methods
**************************/
void USpeechRecognitionComponent::WordsSpoken_trigger(FWordsSpokenSignature delegate_method, FRecognisedPhrases text)
{
	delegate_method.Broadcast(text);
}

void USpeechRecognitionComponent::WordsSpoken_method(FRecognisedPhrases text)
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
	(
		FSimpleDelegateGraphTask::FDelegate::CreateStatic(&WordsSpoken_trigger, OnWordsSpoken, text)
		, TStatId()
		, nullptr
		, ENamedThreads::GameThread
	);
}

void USpeechRecognitionComponent::UnknownPhrase_trigger(FUnknownPhraseSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionComponent::UnknownPhrase_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
	(
		FSimpleDelegateGraphTask::FDelegate::CreateStatic(&UnknownPhrase_trigger, OnUnknownPhrase)
		, TStatId()
		, nullptr
		, ENamedThreads::GameThread
	);
}

void USpeechRecognitionComponent::StartedSpeaking_trigger(FStartedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionComponent::StartedSpeaking_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
	(
		FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StartedSpeaking_trigger, OnStartedSpeaking)
		, TStatId()
		, nullptr
		, ENamedThreads::GameThread
	);
}

void USpeechRecognitionComponent::StoppedSpeaking_trigger(FStoppedSpeakingSignature delegate_method)
{
	delegate_method.Broadcast();
}

void USpeechRecognitionComponent::StoppedSpeaking_method()
{
	FSimpleDelegateGraphTask::CreateAndDispatchWhenReady
	(
		FSimpleDelegateGraphTask::FDelegate::CreateStatic(&StoppedSpeaking_trigger, OnStoppedSpeaking)
		, TStatId()
		, nullptr
		, ENamedThreads::GameThread
	);
}
