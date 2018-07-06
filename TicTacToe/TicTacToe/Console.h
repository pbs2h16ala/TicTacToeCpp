#pragma once

#include "Enums.h"
#include <iostream>
#include <string>

class Console
{
private:
	const std::string GAME_TITLE = "Tic Tac Toe";
	const std::string AUTHOR_NAME = "Stephan Lange";
	const std::string GAME_VERSION = "1.0";

public:

	static void appStartMessage();
	static void line(std::string text);
	static void illegalCmdAlert();
	static void displayHelp();
	static Enums::InputCommand getUserInputCommand();

};