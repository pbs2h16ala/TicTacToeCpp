#pragma once
#include "GameMaster.h"
#include "Enums.h"
#include <iostream>
#include <memory>


class AppDelegator
{
private:

	void cmdHelp();
	void cmdAppClose();
	void cmdGmNewGame();
	void cmdIllegal();

public:

	Enums::AppState appStatus;
	std::shared_ptr<GameMaster> gameMaster;

	AppDelegator() { };
	~AppDelegator() { };
	static std::shared_ptr<AppDelegator> newShared();

	void setup();
	void runLoop();
	void executeCommand(Enums::InputCommand inputCommand);
	static bool checkForAppClose(Enums::InputCommand inputCommand);

}; // Hier Semikolon nicht vergessen