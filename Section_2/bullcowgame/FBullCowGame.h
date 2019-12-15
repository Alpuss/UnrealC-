#pragma once
#include <string>
class FBullCowGame {
public:
	FBullCowGame(); // constructor
	void Reset(); // TODO make a more rich return value
	int GetMaxTries()const;
	int GetCurrentTry();
	bool IsGameWon()const;
	bool CheckGuessValidity(std::string);



	//pls try ignore this 
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};