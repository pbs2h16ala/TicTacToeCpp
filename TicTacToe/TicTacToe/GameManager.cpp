// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.cpp"


class GameManager
{
private:

	bool initNewGameIfPossible;
public:
	GameManager();
	~GameManager();
	void initNewGame(Player playerOne, Player playerTwo, int winCondition);
	void setGameStartIfPossible();


	void startMatch(int playerToStart);
	voif 
}; // Hier Semikolon nicht vergessen



   // Method Implementation
GameManager::GameManager()
{
	setGameStartIfPossible();
}

GameManager::~GameManager()
{

}

void GameManager::setGameStartIfPossible()
{
	initNewGameIfPossible = true;
}

// Game

void initNewGame(Player playerOne, Player playerTwo, int winCondition) 
{

}
