/*
 * Person.cpp
 *
 *  Created on: Sep 11, 2017
 *      Author: Ben
 */

#include <iostream>
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "";
	age = 0;
}

std::string Person::toString(){
	std::stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}

Person::~Person() {
}

