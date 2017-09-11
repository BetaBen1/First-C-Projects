/*
 * String Streams
 */

#include <iostream>
#include <sstream>

int main(){

	std::string name = "Bob";
	int age = 32;

	std::stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	std::string info = ss.str();

	std::cout << info << std::endl;

	return 0;
}
