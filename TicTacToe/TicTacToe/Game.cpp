// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "Player.cpp"
#include "GameField.cpp"


class Game
{
private:

	int winCondition, winPlayer, playerOnTurn;
	Player playerOne;
	Player playerTwo;

	GameField gameField;

public:
	Game();
	~Game();
	void initNewGame(Player , Player , int pWinCondition);
	void initNewGame(Player , Player , int pWinCondition, int pPlayerOnTurn);
	void startMatch(int playerToStart);
}; // Hier Semikolon nicht vergessen



   // Method Implementation
Game::Game()
{

}

Game::~Game()
{

}

// Game

void initNewGame(Player pPlayerOne, Player pPlayerTwo, int pWinCondition)
{


}

void initNewGame(Player pPlayerOne, Player pPlayerTwo, int pWinCondition, int pPlayerOnTurn)
{

}
