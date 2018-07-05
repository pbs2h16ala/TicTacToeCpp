// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "AppDelegator.h"
#include "DisplayOutput.h"

// Method Implementation
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

void AppDelegator::runLoop() 
{
	InputCommand inputCommand;

	DisplayOutput::appStartMessage();

	while (appStatus != this->EXIT_RUNLOOP)
	{
		inputCommand = this->gameMaster->requestForNewGame();
	}

	this->appStatus = this->RUNLOOP_CLOSED;
}

// Method Implementation
//
// private

void AppDelegator::cmdGmNewMatch()
{

}

void AppDelegator::cmdAppClose()
{

}


/////////////
// public

char AppDelegator::getUserInputChar() 
{
	return getchar();
}

void AppDelegator::executeCommand(AppDelegator::InputCommand inputCommand)
{
	
}

