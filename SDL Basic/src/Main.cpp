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

	int max = 0;

	while(true){
		// Update particles
		// Draw particles
		// Check for messages/events

		for(int y=0; y < betaben::Screen::SCREEN_HEIGHT; y++){
			for(int x=0; x < betaben::Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x, y, 128, 0, 255);
			}
		}

		screen.setPixel(400, 300, 255, 255, 255);

		screen.update();

		if(screen.processEvents() == false){
			break;
		}


	}

	screen.close();

	return 0;
}
