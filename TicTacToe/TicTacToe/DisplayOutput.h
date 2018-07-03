#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class DisplayOutput
{
private:
	const std::string GAME_TITLE = "Tic Tac Toe";
	const std::string AUTHOR_NAME = "Stephan Lange";
	const std::string GAME_VERSION = "1.0";

public:
	DisplayOutput();
	~DisplayOutput();
	static void appStartMessage();
};