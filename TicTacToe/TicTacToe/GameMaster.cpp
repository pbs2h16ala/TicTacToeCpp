// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "GameMaster.h"

   // Method Implementation
std::shared_ptr<GameMaster> GameMaster::newShared()
{
	return std::make_shared<GameMaster>();
}


void GameMaster::setup()
{

}

void GameMaster::requestForNewGame()
{

}

void GameMaster::setGameStartIfPossible()
{

}

void GameMaster::appStartMessage()
{

}