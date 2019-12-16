#include "FBullCowGame.h"
FBullCowGame::FBullCowGame()
{
	Reset();
}
void FBullCowGame::Reset()
{
	constexpr int MAX_TRIES = 8;
	int MyCurrentTry = 1;
	int MyMaxTries = MAX_TRIES;
	return;
}

int FBullCowGame::GetMaxTries() const
{
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry()
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
