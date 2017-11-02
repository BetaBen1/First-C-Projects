/*
 * Const
 */

#include <iostream>

class Animal {
private:
	std::string name;

public:
	void setName(std::string name) { this->name = name; };
	void speak() const {std::cout << "My name is: " << name << std::endl; }
};

int main(){

	const double PI = 3.141593;
	std::cout << PI << std::endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;
	int *pValue = &value;
	std::cout << *pValue << std::endl;

	int number = 11;
	pValue = &number; //Error with this: int * const pValue = &value;
	*pValue = 12; //Error with this: const int *pValue = &value;

	std::cout << *pValue << std::endl;

	return 0;
}
