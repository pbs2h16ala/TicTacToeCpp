// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "AppDelegator.h"
#include "DisplayOutput.h"

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
	this->appStatus = this->APP_INITIALIZE;
	this->gameMaster = GameMaster::newShared();
	this->gameMaster->setup();
}


//////////////////////////////////////////////
// Method Implementation
//
// private
void AppDelegator::cmdHelp()
{
	DisplayOutput::displayHelp();

	AppDelegator::InputCommand inputCommand = AppDelegator::getUserInputCommand();
}

void AppDelegator::cmdAppClose()
{
	this->appStatus = this->AppState::EXIT_RUNLOOP;
}

void AppDelegator::cmdGmNewMatch()
{
	this->gameMaster->runNewGameLoop();
}

void AppDelegator::cmdIllegal()
{
	DisplayOutput::illegalCmdAlert;
}


/////////////
// public

/////////////////////////////////////////////////////////////////////////////
//		RUNLOOP

void AppDelegator::runLoop()
{
	InputCommand inputCommand;

	DisplayOutput::appStartMessage();

	while (appStatus != this->AppState::EXIT_RUNLOOP)
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

	this->appStatus = this->AppState::RUNLOOP_CLOSED;
}

//////////////////////////////////// ///////////////////////////////////////

void AppDelegator::executeCommand(AppDelegator::InputCommand inputCommand)
{
	AppDelegator::InputCommand command = inputCommand;

	switch (command)
	{
	case AppDelegator::InputCommand::HELP: this->cmdHelp();
		break;

	case AppDelegator::InputCommand::EXIT_APP: this->cmdAppClose();
		break;

	case AppDelegator::InputCommand::NEW_MATCH:	this->cmdGmNewMatch();
		break;

	case AppDelegator::InputCommand::ILLEGAL_CMD: this->cmdIllegal();
		break;

	default: this->cmdIllegal();
			return;
	}
}


AppDelegator::InputCommand AppDelegator::getUserInputCommand()
{
	char inputChar = getchar();

	inputChar = tolower(inputChar);

	return static_cast<InputCommand>(inputChar);
}


bool AppDelegator::checkForAppClose(AppDelegator::InputCommand inputCommand)
{
	if (inputCommand == AppDelegator::InputCommand::EXIT_APP) 
	{
		return true;
	}

	return false;
}

