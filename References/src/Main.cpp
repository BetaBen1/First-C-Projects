/*
 * References
 */

#include <iostream>

void changeSomething(double &value){
	value = 123.4;
}

int main(){

	int value1 = 8;
	int &value2 = value1;

	value2 = 10;

	std::cout << "Value1: " << value1 << std::endl;
	std::cout << "Value2: " << value2 << std::endl;

	double value = 4.321;
	changeSomething(value);
	std::cout << "Value: " << value << std::endl;

	return 0;
}
