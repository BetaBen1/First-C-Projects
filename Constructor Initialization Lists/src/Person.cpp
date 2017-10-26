/*
 * Person.cpp
 *
 *  Created on: Sep 11, 2017
 *      Author: Ben
 */

#include <iostream>
#include <sstream>
#include "Person.h"

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

