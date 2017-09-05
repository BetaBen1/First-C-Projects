/*
 * Person.cpp
 *
 *  Created on: Sep 5, 2017
 *      Author: Ben
 */

#include "Person.h"

Person::Person() {

	name = "George";

}

std::string Person::toString(){
	return "Person's name is: " + name;
}

void Person::setName(std::string newName){
	name = newName;
}

std::string Person::getName(){
	return name;
}

