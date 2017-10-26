/*
 * The "This" Statement–A first taste of pointers
 */

#include <iostream>
#include "Person.h"

int main(){

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	std::cout << person1.toString() << std::endl;
	std::cout << person2.toString() << std::endl;
	std::cout << person3.toString() << std::endl;

	person1.~Person();
	person2.~Person();
	person3.~Person();

	return 0;
}
