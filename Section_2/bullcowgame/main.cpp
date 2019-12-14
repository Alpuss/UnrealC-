#include <iostream>

#include <string>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

int main() 
{
	PrintIntro();
	GetGuessAndPrintBack();
	GetGuessAndPrintBack();
	
return 0;
}
void PrintIntro() {
	//przedstawienie gru
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}
string GetGuessAndPrintBack() {
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}