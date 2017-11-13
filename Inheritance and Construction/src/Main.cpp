/*
 * Inheritance and Construction
 */

#include <iostream>

class Machine {
private:
	int id;
public:
	Machine(): id(0) { std::cout << "Machine no-argument constructor called." << std::endl; }
	Machine(int id): id(id) { std::cout << "Machine parameterized constructor called." << std::endl; }
	void info() { std::cout << "ID: " << id << std::endl; }
};

class Vehicle: public Machine {
public:
	Vehicle(int id): Machine(id) { std::cout << "Vehicle parameterized constructor called." << std::endl; }
	Vehicle() { std::cout << "Vehicle no-argument constructor called." << std::endl; }
};

class Car: public Vehicle {
public:
	Car(): Vehicle(999) { std::cout << "Car no-argument constructor called." << std::endl; }
};

int main(){

	Car car;
	car.info();


	return 0;
}
