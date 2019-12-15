#include <iostream>
#include <string>
#include "FBullCowGame.h"


void PrintIntro();
std::string GetGuess();
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
	void PlayGame() {

		int MaxTries = BCGame.GetMaxTries();
		std::cout << MaxTries << std::endl;
		//loop

		for (int count = 1; count <= MaxTries; count++) {
			std::string Guess = GetGuess();
			std::cout << std::endl;
		}
	}
	bool AskToPlayAgain()
	{
		std::cout << "Do you want to play again? (y/n)";
		std::string Response = "";
		std::getline(std::cin, Response);
		return (Response[0] == 'y') || (Response[0] == 'Y');
	}
	void PrintIntro()
	{
		//przedstawienie gru
		constexpr int WORLD_LENGTH = 5;
		std::cout << "Welcome to Bulls and Cows, a fun word game\n";
		std::cout << "Can you guess the " << WORLD_LENGTH;
		std::cout << " letter isogram I'm thinking of?\n";
		std::cout << std::endl;
		return;
	}
	std::string GetGuess()
	{
		int CurrentTry = BCGame.GetCurrentTry();
		//get a guess from the player
		std::cout << "Try " << CurrentTry << "Enter your guess: ";
		std::string Guess = "";
		std::getline(std::cin, Guess);
		std::cout << "Your guess was: " << Guess << std::endl;
		return Guess;
	}
