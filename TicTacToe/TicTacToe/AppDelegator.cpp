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
	this->appStatus = this->INIT_APP;
	this->gameMaster = GameMaster::newShared();
	this->gameMaster->setup();
}

void AppDelegator::runLoop() 
{
	DisplayOutput::appStartMessage();

	while (appStatus != this->EXIT_RUNLOOP)
	{
		char inputC = this->getUserInputChar();

		if (inputC == 'q')
		{
			this->appStatus = this->EXIT_RUNLOOP;
		}
		else
		{
			std::cout << inputC;
		}
	}

	this->appStatus = this->RUNLOOP_CLOSED;
}

// Method Implementation

char AppDelegator::getUserInputChar() 
{
	return getchar();
}


