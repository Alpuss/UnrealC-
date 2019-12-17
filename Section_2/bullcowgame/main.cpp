#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetValidGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame; //instantiate a new game
int main()
	{
		bool bPlayAgain = false;
		do {
			PrintIntro();
			PlayGame();
			bPlayAgain = AskToPlayAgain();
		}
		while (bPlayAgain);
		return 0;
	}
void PrintIntro()
{
	//przedstawienie gru
	std::cout << "Welcome to Bulls and Cows, a fun word game\n";
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}
void PlayGame() {
		BCGame.Reset();
		int32 MaxTries = BCGame.GetMaxTries();
		
		//loop

		for (int32 count = 1; count <= MaxTries; count++) {
			FText Guess = GetValidGuess();

			
			}
			std::cout << std::endl;
			FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
			std::cout << "Bulls = " << BullCowCount.Bulls;
			std::cout << " Cows = " << BullCowCount.Cows << "\n\n";
		}
	}
FText GetValidGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	//get a guess from the player
	std::cout << "Try " << CurrentTry << " Enter your guess: ";
	FText Guess = "";
	std::getline(std::cin, Guess);

	EGuessStatus Status = BCGame.CheckGuessValidity(Guess);
	switch (Status) {
	case EGuessStatus::Wrong_Length:
		std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n";
		break;
	default:
}
bool AskToPlayAgain()
	{
		std::cout << "Do you want to play again? (y/n)";
		FText Response = "";
		std::getline(std::cin, Response);
		return (Response[0] == 'y') || (Response[0] == 'Y');
	}
	

