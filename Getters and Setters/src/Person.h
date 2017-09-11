/*
 * Person.h
 *
 *  Created on: Sep 5, 2017
 *      Author: Ben
 */

#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_
#include <iostream>

class Person {
private:
	std::string name;

public:
	Person();
	std::string toString();
	void setName(std::string newName);
	std::string getName();
};

#endif /* SRC_PERSON_H_ */
