/*
 * Pointer Arithmetic!
 */

#include <iostream>

int main(){

	const int NSTRINGS = 5;

	std::string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

	std::string *pTexts = texts;
	pTexts += 3;

	std::cout << *pTexts << std::endl;

	pTexts -= 2;

	std::cout << *pTexts << std::endl;

	std::string *pEnd = &texts[NSTRINGS];
	pTexts = &texts[0];

	while(pTexts != pEnd){
		std::cout << *pTexts << std::endl;
		pTexts++;
	}

	pTexts = &texts[0];

	long elements = (long)(pEnd - pTexts);

	std::cout << elements << std::endl;

	// How to get the middle element of an array.
	pTexts = &texts[0];
	pTexts += NSTRINGS/2;
	std::cout << *pTexts << std::endl;

	return 0;
}
