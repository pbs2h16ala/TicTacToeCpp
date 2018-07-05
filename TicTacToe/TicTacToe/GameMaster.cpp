// TicTacToe.cpp : Defines the entry point for the console application.
//
#include "GameMaster.h"


GameMaster::GameMaster()
{

}

GameMaster::~GameMaster()
{

}

   // Method Implementation
std::shared_ptr<GameMaster> GameMaster::init()
{
	return std::shared_ptr<GameMaster>();
}



void GameMaster::setGameStartIfPossible()
{
	initNewGameIfPossible = true;
}

void GameMaster::appStartMessage()
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
	std::printf("  #   ##___________________________|  This game is an full implementation of tic tac toe.        # \n");
	std::printf("  ##  ##                           |  You can play versus computer or an real life opponent.     # \n");
	std::printf("  # # ##    version: 1.0           |  Type 'H' for help and further Informations.                # \n");
	std::printf("  #  ###                           |                                                             # \n");
	std::printf("  #   ############################################################################################ \n");
	std::printf("   #  ##                |            |             |                                             # \n");
	std::printf("    # ## [N] = new game | [H] = help |  [Q] = quit |                                             # \n");
	std::printf("     ###                |            |             |                                             # \n");
	std::printf("      ############################################################################################ \n");
}