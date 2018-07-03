// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "DisplayOutput.h"

DisplayOutput::DisplayOutput()
{

}

DisplayOutput::~DisplayOutput()
{

}

// Method Implementation
void DisplayOutput::appStartMessage()
{
	std::cout << std::left << std::setw(15) << "Hello World";
}
