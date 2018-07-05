#pragma once
#include "GameMaster.h"
#include <iostream>
#include <memory>


class AppDelegator
{
private:
	const int INIT_APP = 1;
	const int EXIT_RUNLOOP = 9;
	const int RUNLOOP_CLOSED = 10;

	int appStatus;
	std::shared_ptr<GameMaster> gameMaster;

public:
	AppDelegator() { };
	~AppDelegator() { };
	static std::shared_ptr<AppDelegator> newShared();

	void setup();
	void runLoop();
	char getUserInputChar();

}; // Hier Semikolon nicht vergessen