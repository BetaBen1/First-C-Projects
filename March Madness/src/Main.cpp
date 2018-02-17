/*
 * March Madness Brackets
 */

#include <iostream>
#include "Team.h"
#include "Game.h"

int main(){

	Team team("Hello", 1);
	Team team2("World", 2);
	Game game(team, team2, 1);
	std::cout << game.getTeam(1).getName() << std::endl;

	return 0;
}

void createMidwestTeams(){

	Team team("Kansas", 1);
	Team team2("UC Davis", 2);
	Team team("Miami (Fla.)", 1);
	Team team2("World", 2);
	Team team("Hello", 1);
	Team team2("World", 2);
	Team team("Hello", 1);
	Team team2("World", 2);
	Team team("Hello", 1);
	Team team2("World", 2);

}

void createSouthTeams(){

}

void createEastTeams(){

}

void createWestTeams(){

}
}
