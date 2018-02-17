/*
 * Team.h
 *
 *  Created on: Feb 13, 2018
 *      Author: Ben
 */

#ifndef SRC_TEAM_H_
#define SRC_TEAM_H_

#include <string>

class Team {
private:
	std::string name;
	int seed;
public:
	Team();
	Team(std::string teamName, int teamSeed) { name = teamName; seed = teamSeed; };
	virtual ~Team();

	const std::string& getName() const {
		return name;
	}

	int getSeed() const {
		return seed;
	}

};

#endif /* SRC_TEAM_H_ */
