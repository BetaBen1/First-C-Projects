/*
 * Constructor Parameters and Overloading
 */

#include <iostream>
#include "Person.h"

int main(){

	Person person1;
	Person person2("Bob");
	Person person3("Jim", 54);

	std::string info1 = person1.toString();
	std::string info2 = person2.toString();
	std::string info3 = person3.toString();

	std::cout << info1 << std::endl;
	std::cout << info2 << std::endl;
	std::cout << info3 << std::endl;

	return 0;
}
