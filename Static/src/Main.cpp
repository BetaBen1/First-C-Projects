/*
 * Static
 */

#include <iostream>

// .h header file
class Test{
public:
	// Initialization of const must be done right here!
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test(){
		id = ++count;
	}

	int getId(){
		return id;
	}

	static void showInfo(){
		std::cout << count << std::endl;
	}
};

// .cpp file
int Test::count = 0;

int main(){

	std::cout << Test::MAX << std::endl;

	Test test1;
	std::cout << "Object 1 ID: " << test1.getId() << std::endl;
	Test test2;
	std::cout << "Object 2 ID: " << test2.getId() << std::endl;

	Test::showInfo();



	return 0;
}
