// TicTacToe.cpp : Defines the entry point for the console application.
//

#include "Match.h"

   // Method Implementation

std::shared_ptr<Match> Match::newShared() 
{
	return std::make_shared<Match>();
}

// Game

void Match::initNewGame(Player pPlayerOne, Player pPlayerTwo, int pWinCondition)
{


}

void Match::initNewGame(Player pPlayerOne, Player pPlayerTwo, int pWinCondition, int pPlayerOnTurn)
{

}

void Match::startMatch(int playerToStart) 
{

}