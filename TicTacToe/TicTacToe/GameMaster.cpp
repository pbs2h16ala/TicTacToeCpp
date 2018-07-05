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

AppDelegator::InputCommand GameMaster::requestForNewGame()
{
	DisplayOutput::line("Please enter your command.. \n");

	AppDelegator::InputCommand inputCommand = AppDelegator::getUserInputCommand();

	if (inputCommand != AppDelegator::InputCommand::NEW_MATCH && inputCommand != AppDelegator::InputCommand::HELP && inputCommand != AppDelegator::InputCommand::EXIT_APP )
	{
		return AppDelegator::InputCommand::ILLEGAL_CMD;
	}

	return inputCommand;
}

void GameMaster::startNewMatch()
{

}
