/*
 * The "This" Statement–A first taste of pointers
 */

#include <iostream>
#include "Person.h"

int main(){

	Person person1;
	Person person2("Bob", 42);
	Person person3("Sue", 25);

	std::cout << person1.toString() << "; memory location: " << &person1 << std::endl;
	std::cout << person2.toString() << "; memory location: " << &person2 << std::endl;
	std::cout << person3.toString() << "; memory location: " << &person3 << std::endl;

	return 0;
}
