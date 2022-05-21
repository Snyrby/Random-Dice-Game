#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

class DiceGame
{
private:
	int RandomDice = 0;
public:
	int DiceRoll()
	{
		int Total = 0;
		RandomDice = (rand() % 6) + 1;
		Total += RandomDice;
		return Total;
	}
};

int main()
{
	int userScore = 0;
	int computerScore = 0;
	srand((unsigned int)time(0));

	cout << "Welcome to the Dice Game!\nYou are playing against the computer. Each player gets to roll 2 dice a total"
		" of 6 times.The player with the highest total of dice values wins!\n\nAre you ready to start?\n";

	DiceGame Dice1, Dice2;

	for (int i = 0; i < 6; i++)
	{
 		userScore += Dice1.DiceRoll() + Dice2.DiceRoll();
	}

	for (int i = 0; i < 6; i++)
	{
		computerScore += Dice1.DiceRoll() + Dice2.DiceRoll();
	}
	
	if (userScore > computerScore)
	{
		cout << "Congratulations, you have won! Your score was: " << userScore << " and the computer score was: " << computerScore << endl;
	}
	else if (computerScore > userScore)
	{
		cout << "Sorry, you have lost. Your score was: " << userScore << " and the computer score was: " << computerScore << endl;
	}
	else
	{
		cout << "The computer and you have tied with a score of: " << userScore << endl;
	}
	system("Pause");
}