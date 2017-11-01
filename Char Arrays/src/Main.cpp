/*
 * Char Arrays
 */

#include <iostream>

int main(){

	char text[] = "hello";

	std::cout << text << std::endl;

	for(int i=0; i<sizeof(text); i++){
		std::cout << i << ": "<< (int)text[i] << std::endl;
	}

	int k = 0;

	while(true){

		if(text[k] == 0){
			break;
		}

		std::cout << text[k] << std::flush;
		k++;
	}

	return 0;
}
