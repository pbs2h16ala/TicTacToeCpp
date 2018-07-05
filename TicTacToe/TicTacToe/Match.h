#pragma once

#include "Player.h"
#include "MatchField.h"

class Match
{
private:

	int winCondition, winPlayer, playerOnTurn;
	Player playerOne;
	Player playerTwo;

	MatchField matchField;

public:

	static std::shared_ptr<Match> newShared();

	void initNewGame(Player, Player, int pWinCondition);
	void initNewGame(Player, Player, int pWinCondition, int pPlayerOnTurn);
	void startMatch(int playerToStart);
}; // Hier Semikolon nicht vergessen
