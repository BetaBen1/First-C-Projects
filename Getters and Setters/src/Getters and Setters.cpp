/*
 * Getters and Setters!!!
 */

#include <iostream>

#include "Person.h"

int main(){

	Person person;
	std::cout << person.toString() << std::endl;
	person.setName("Bob");
	std::cout << person.toString() << std::endl;
	std::cout << "Name of person using get method: " << person.getName() << std::endl;

	return 0;
}
