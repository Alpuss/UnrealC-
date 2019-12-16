#pragma once
#include <string>
using FString = std::string;
using int32 = int;
class FBullCowGame {
public:
	FBullCowGame(); // constructor
	void Reset(); // TODO make a more rich return value
	int32 GetMaxTries()const;
	int32 GetCurrentTry() const;
	bool IsGameWon()const;
	bool CheckGuessValidity(FString);



	//pls try ignore this 
private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
};