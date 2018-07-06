// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "Console.h"

// Method Implementation
void Console::appStartMessage()
{
	std::printf("\n  ############################################################################################# \n");
	std::printf("  # ############################################################################################# \n");
	std::printf("  #  ############################################################################################# \n");
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  #   ##  ##########             ##########                 ##########                           # \n");
	std::printf("  #   ##      ##     ##              ##                         ##                               # \n");
	std::printf("  #   ##      ##           ######    ##     #######   ######    ##     ########      ######      # \n");
	std::printf("  #   ##      ##     ##   ##         ##   ##     ##  ##         ##    ##      ##    ##    ##     # \n");
	std::printf("  #   ##      ##     ##  ##          ##  ##      ## ##          ##   ##        ##  ##  ####      # \n");
	std::printf("  ##  ##      ##     ##   ##         ##   ##     ##  ##         ##    ##      ##    ##           # \n");
	std::printf("  ### ##      ##     ##    ######    ##     #### ##   ######    ##     ########      #######     # \n");
	std::printf("  # ####                                                                                         # \n");
	std::printf("  #  ############################################################################################# \n");
	std::printf("  #   ############################################################################################ \n");
	std::printf("  #   ##                           |                                                             # \n");
	std::printf("  #   ##    author: Stephan Lange  |  Description:                                               # \n");
	std::printf("  #   ##___________________________|  Welcome to Tic Tac Toe.                                    # \n");
	std::printf("  ##  ##                           |  You can play versus computer or an real life opponent.     # \n");
	std::printf("  # # ##    version: 1.0           |  Type 'H' for help and further Information .                # \n");
	std::printf("  #  ###                           |                                                             # \n");
	std::printf("  #   ############################################################################################ \n");
	std::printf("   #  ##                |            |             |                                             # \n");
	std::printf("    # ## [N] = new game | [H] = help |  [Q] = quit |                                             # \n");
	std::printf("     ###                |            |             |                                             # \n");
	std::printf("      ############################################################################################ \n");
}

void Console::line(std::string text)
{
	std::cout << "  #   ## " + text + "\n";
}

void Console::illegalCmdAlert()
{
	std::cout << "  #   ## illegal command! \n";
}

void Console::displayHelp()
{
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  #   ##  Help                                                                                   # \n");
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  #   ##                                                                                         # \n");
	std::printf("  ##  ##                                                                                         # \n");
	std::printf("  ### ##                                                                                         # \n");
	std::printf("  # ####                                                                                         # \n");
	std::printf("  #  ############################################################################################# \n");
	std::printf("  #   ############################################################################################ \n");
	std::printf("  #   ##                           |                                                             # \n");
	std::printf("  #   ##                           |  Description:                                               # \n");
	std::printf("  #   ##___________________________|  Welcome to Tic Tac Toe.                                    # \n");
	std::printf("  ##  ##                           |  You can play versus computer or an real life opponent.     # \n");
	std::printf("  # # ##                           |  Type 'H' for help and further Information .                # \n");
	std::printf("  #  ###                           |                                                             # \n");
	std::printf("  #   ############################################################################################ \n");
	std::printf("   #  ##                |            |             |                                             # \n");
	std::printf("    # ##                |            |  [Q] = quit |                                             # \n");
	std::printf("     ###                |            |             |                                             # \n");
	std::printf("      ############################################################################################ \n");
}

Enums::InputCommand Console::getUserInputCommand()
{
	char inputChar = getchar();

	inputChar = tolower(inputChar);

	return static_cast<Enums::InputCommand>(inputChar);
}

