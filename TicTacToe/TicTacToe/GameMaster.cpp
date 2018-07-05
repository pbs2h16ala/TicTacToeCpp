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

	char userInput = AppDelegator::getUserInputChar();
	AppDelegator::InputCommand inputCommand;

	userInput = tolower(userInput);

	switch (userInput)
	{
		case 'm': inputCommand = AppDelegator::InputCommand::NEW_MATCH;
			break;

		case 'h': inputCommand = AppDelegator::InputCommand::HELP;
			break;

		case 'q': inputCommand = AppDelegator::InputCommand::EXIT_APP; 
			break;

		default: return this->requestForNewGame(); 
	}

	return inputCommand;
}

void GameMaster::setGameStartIfPossible()
{

}

void GameMaster::appStartMessage()
{

}