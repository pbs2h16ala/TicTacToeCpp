// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "AppDelegator.h"
#include "Console.h"

//////////////////////////////////////////////
// Init
//
// public

std::shared_ptr<AppDelegator> AppDelegator::newShared()
{
	return std::make_shared<AppDelegator>();
}

void AppDelegator::setup()
{
	this->appStatus = Enums::AppState::APP_INITIALIZE;
	this->gameMaster = GameMaster::newShared();
	this->gameMaster->setup();
}


//////////////////////////////////////////////
// Method Implementation
//
// private
void AppDelegator::cmdHelp()
{
	Console::displayHelp();

	Enums::InputCommand inputCommand = Console::getUserInputCommand();

	if (this->checkForAppClose(inputCommand))
	{
		this->cmdAppClose();
		return;
	}
	else
	{
		this->executeCommand(inputCommand);
	}
}

void AppDelegator::cmdAppClose()
{
	this->appStatus = Enums::AppState::EXIT_RUNLOOP;
}

void AppDelegator::cmdGmNewGame()
{
	this->gameMaster->runNewGameLoop();
}

void AppDelegator::cmdIllegal()
{
	Console::illegalCmdAlert();
}


/////////////
// public

/////////////////////////////////////////////////////////////////////////////
//		RUNLOOP

void AppDelegator::runLoop()
{
	Enums::InputCommand inputCommand;

	Console::appStartMessage();

	while (appStatus != Enums::AppState::EXIT_RUNLOOP)
	{
		inputCommand = this->gameMaster->requestForNewGame();

		if (this->checkForAppClose(inputCommand)) 
		{
			this->cmdAppClose();
			continue;
		}
		else
		{
			this->executeCommand(inputCommand);
		}
	}

	this->appStatus = Enums::AppState::RUNLOOP_CLOSED;
}

//////////////////////////////////// ///////////////////////////////////////

void AppDelegator::executeCommand(Enums::InputCommand inputCommand)
{
	Enums::InputCommand command = inputCommand;

	switch (command)
	{
	case Enums::InputCommand::HELP: this->cmdHelp();
		break;

	case Enums::InputCommand::EXIT_APP: this->cmdAppClose();
		break;

	case Enums::InputCommand::NEW_MATCH:	this->cmdGmNewGame();
		break;

	case Enums::InputCommand::ILLEGAL_CMD: this->cmdIllegal();
		break;

	default: this->cmdIllegal();
			return;
	}
}


bool AppDelegator::checkForAppClose(Enums::InputCommand inputCommand)
{
	if (inputCommand == Enums::InputCommand::EXIT_APP)
	{
		return true;
	}

	return false;
}

