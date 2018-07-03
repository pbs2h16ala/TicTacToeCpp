#pragma once

#include "Player.cpp"
#include "GameField.cpp"


class Match
{
private:

	int winCondition, winPlayer, playerOnTurn;
	Player playerOne;
	Player playerTwo;

	GameField gameField;

public:
	Match();
	~Match();
	void initNewGame(Player, Player, int pWinCondition);
	void initNewGame(Player, Player, int pWinCondition, int pPlayerOnTurn);
	void startMatch(int playerToStart);
}; // Hier Semikolon nicht vergessen
