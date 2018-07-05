// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "GameMaster.h"


GameMaster::GameMaster()
{

}

GameMaster::~GameMaster()
{

}

   // Method Implementation
std::shared_ptr<GameMaster> GameMaster::init()
{
	return std::shared_ptr<GameMaster>();
}



void GameMaster::setGameStartIfPossible()
{
	initNewGameIfPossible = true;
}

void GameMaster::appStartMessage()
{
	std::cout << std::left << std::setw(15) << "Hello World";
}