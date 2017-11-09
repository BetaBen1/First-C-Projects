/*
 * Inheritance
 */

#include <iostream>

class Animal {
public:
	const void speak(){
		std::cout << "Grrrrr" << std::endl;
	}
};

class Cat: public Animal {
public:
	void jump(){
		std::cout << "Cat jumping." << std::endl;
	}
};

class Tiger: public Cat{
public:
	void attackAntelope(){
		std::cout << "Attacking antelope." << std::endl;
	}
};

int main(){

	Animal a;
	a.speak();

	std::cout << "---------------------" << std::endl;

	Cat cat;
	cat.speak();
	cat.jump();

	std::cout << "---------------------" << std::endl;

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attackAntelope();

	return 0;
}
