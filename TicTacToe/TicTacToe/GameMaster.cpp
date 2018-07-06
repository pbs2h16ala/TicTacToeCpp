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

Enums::InputCommand GameMaster::requestForNewGame()
{
	Console::line("Please enter your command.. \n");

	Enums::InputCommand inputCommand = Console::getUserInputCommand();

	if (inputCommand != Enums::InputCommand::NEW_MATCH && inputCommand != Enums::InputCommand::HELP && inputCommand != Enums::InputCommand::EXIT_APP )
	{
		return Enums::InputCommand::ILLEGAL_CMD;
	}

	return inputCommand;
}

void GameMaster::runNewGameLoop() 
{

};

void GameMaster::startNewMatch()
{

}
