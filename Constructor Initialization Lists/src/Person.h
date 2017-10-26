/*
 * Person.h
 *
 *  Created on: Sep 11, 2017
 *      Author: Ben
 */

#include <iostream>

#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_

class Person {
private:
	std::string name;
	int age;
public:
	Person(): name("Unnamed"), age(0) {};
	Person(std::string name, int age): name(name), age(age) {};
	std::string toString();
	virtual ~Person();
};

#endif /* SRC_PERSON_H_ */
