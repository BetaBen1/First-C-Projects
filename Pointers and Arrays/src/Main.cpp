/*
 * Pointers and Arrays!!!
 */

#include <iostream>

int main() {

	std::string texts[] = { "one", "two", "three" };

	std::string *pTexts = texts;
	int size = sizeof(texts) / sizeof(std::string);

	//std::cout << size << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << pTexts[i] << " " << std::flush;
	}

	std::cout << std::endl;

	for (int i = 0; i < size; i++, pTexts++) {
		std::cout << *pTexts << " " << std::flush;
	}

	std::cout << std::endl;

	std::string *pElement = &texts[0];
	std::string *pEnd = &texts[2];

	while(true){
		std::cout << *pElement << " " << std::flush;

		if(pElement == pEnd){
			break;
		}

		pElement++;
	}

	return 0;
}
