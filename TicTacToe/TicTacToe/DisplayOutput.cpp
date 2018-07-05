// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "DisplayOutput.h"

// Method Implementation
void DisplayOutput::appStartMessage()
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

void DisplayOutput::line(std::string text)
{
	std::cout << "  #   ## " + text + "\n";
}

void DisplayOutput::illegalCmdAlert()
{
	std::cout << "  #   ## illegal command! \n";
}
