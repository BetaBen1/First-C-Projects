/*
 * Game.h
 *
 *  Created on: Feb 13, 2018
 *      Author: Ben
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "Team.h"

class Game {
private:
public:
	Game();
	Game(Team team1, Team team2, int gameNumber);
	Team getTeam(int i);
	Team winners[16];
	virtual ~Game();
};

#endif /* SRC_GAME_H_ */
