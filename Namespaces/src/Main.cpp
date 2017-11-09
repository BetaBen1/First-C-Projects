/*
 * Namespaces
 */

#include <iostream>
#include "Cat.h"
#include "Animal.h"

int main(){

	cats::Cat cat;
	cat.speak();

	betaben::Cat cat2;
	cat2.speak();

	std::cout << "betaben CATNAME: " << betaben::CATNAME << "; cats CATNAME: " << cats::CATNAME << std:: endl;


	return 0;
}
