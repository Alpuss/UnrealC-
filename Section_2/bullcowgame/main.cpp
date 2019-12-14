#include <iostream>

#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();
int main() 
{
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
return 0;
}
void PlayGame() {	
	//loop
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
		string Guess = GetGuess();
		cout << endl;
	}
}
bool AskToPlayAgain()
{
	cout << "Do you want to play again?";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
void PrintIntro()
{
	//przedstawienie gru
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}
string GetGuess() 
{
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}