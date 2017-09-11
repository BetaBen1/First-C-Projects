/*
 * Person.h
 *
 *  Created on: Sep 11, 2017
 *      Author: Ben
 */

#include <iostream>

#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	std::string name;
	int age;
public:
	Person();
	Person(std::string newName){ name = newName; age = 0; };
	Person(std::string newName, int newAge){ name = newName; age = newAge; };
	std::string toString();
};

#endif /* PERSON_H_ */
