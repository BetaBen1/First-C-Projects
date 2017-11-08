/*
 * Arrays and Functions
 */

#include <iostream>

// Could declare variables here. std::string numbers[] = { "one", "two", "three" };

void show1(const int nElements, std::string texts[]){

	// std::cout << sizeof(texts) << std::endl; Returns the size of a pointer

	for(int i=0; i<nElements; i++){
		std::cout << texts[i] << std::endl;
	}

}

void show2(const int nElements, std::string *texts[]){

	// std::cout << sizeof(texts) << std::endl; Returns the size of a pointer

	for(int i=0; i<nElements; i++){
		std::cout << texts[i] << std::endl;
	}

}

void show3(std::string (&texts)[3]){

	// std::cout << sizeof(texts) << std::endl; Returns the size of a pointer

	for(int i=0; i<sizeof(texts)/sizeof(std::string); i++){
		std::cout << texts[i] << std::endl;
	}

}

//std::string *getArray(){
//	std::string texts[] = { "one", "two", "three" }; // Don't return pointers to local variables!
//	return numbers;
//}

char *getMemory(){
	char *pMem = new char[100];
	return pMem;
}

void freeMemory(char *pMem){ // Deallocates memory.
	delete [] pMem;
}

int main() {

	std::string texts[] = {"apple", "orange", "banana"};

	std::cout << sizeof(texts) << std::endl;
	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
