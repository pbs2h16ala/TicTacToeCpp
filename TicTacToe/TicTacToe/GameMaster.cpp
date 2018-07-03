// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "GameMaster.h"

   // Method Implementation
std::unique_ptr<GameMaster> GameMaster::init()
{
	return std::make_unique<GameMaster>();
}



void GameMaster::setGameStartIfPossible()
{
	initNewGameIfPossible = true;
}

void GameMaster::appStartMessage()
{
	std::cout << std::left << std::setw(15) << "Hello World";
}