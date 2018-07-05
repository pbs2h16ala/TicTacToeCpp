#pragma once
#include "GameMaster.h"
#include <iostream>
#include <memory>


class AppDelegator
{
private:

	std::shared_ptr<GameMaster> gameMaster;

	void cmdGmNewMatch();
	void cmdAppClose();
public:
	enum AppState:int 
	{
		APP_START = 2,
		APP_INITIALIZE = 4,
		EXIT_RUNLOOP = 12,
	    RUNLOOP_CLOSED = 16
	};
	enum InputCommand :char
	{
		YES = 'y',
		NO = 'n',
		EXIT_APP = 'q',
		HELP = 'h',
		NEW_MATCH = 'm',
	};
	AppState appStatus;


	AppDelegator() { };
	~AppDelegator() { };
	static std::shared_ptr<AppDelegator> newShared();

	void setup();
	void runLoop();
	void executeCommand(AppDelegator::InputCommand inputCommand);
	static char getUserInputChar();


}; // Hier Semikolon nicht vergessen