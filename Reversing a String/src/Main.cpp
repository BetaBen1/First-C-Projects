/*
 * Reversing a string!
 */

#include <iostream>

int main(){

	char text[] = "Hello World!";

	int len = sizeof(text)-1;

	char *pStart = text;
	char *pEnd = text + len - 1;

	std::cout << text << std::endl;

	while(pStart < pEnd){

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;


		pStart++;
		pEnd--;

	}

	std::cout << text << std::endl;

	return 0;
}
