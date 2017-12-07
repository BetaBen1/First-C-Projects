/*
 * My first SDL test
 */

#include <iostream>
#include <SDL.h>
#include "Screen.h"

int main(){

	betaben::Screen screen;

	if(screen.init() == false){
		std::cout << "Error initializing SDL." << std::endl;
	}

	bool quit = false;


	while(true){
		// Update particles
		// Draw particles
		// Check for messages/events

		if(screen.processEvents() == false){
			break;
		}


	}

	screen.close();

	return 0;
}
