#pragma once
#include "GameMaster.h"
#include <iostream>
#include <memory>


class AppDelegator
{
private:

	std::shared_ptr<GameMaster> gameMaster;

	void cmdHelp();
	void cmdAppClose();
	void cmdGmNewMatch();
	void cmdIllegal();

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
		ILLEGAL_CMD = 'I'
	};

	AppState appStatus;

	AppDelegator() { };
	~AppDelegator() { };
	static std::shared_ptr<AppDelegator> newShared();

	void setup();
	void runLoop();
	void executeCommand(AppDelegator::InputCommand inputCommand);
	static AppDelegator::InputCommand getUserInputCommand();
	static bool checkForAppClose(AppDelegator::InputCommand inputCommand);


}; // Hier Semikolon nicht vergessen