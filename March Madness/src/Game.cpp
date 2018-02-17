/*
 * Game.cpp
 *
 *  Created on: Feb 13, 2018
 *      Author: Ben
 */

#include <iostream>
#include "Game.h"


Game::Game() {

}

Game::Game(Team team1, Team team2, int gameNumber){

	Team winner;
	if(team1.getSeed() > team2.getSeed()){
		winner = team1;
	} else {
		winner = team2;
	}

	winners[gameNumber] = winner;

}

Team Game::getTeam(int i){
	Team team(winners[i]);
	return(team);
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}
