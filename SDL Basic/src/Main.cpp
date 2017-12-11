/*
 * My first SDL test
 */

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"

int main() {

	betaben::Screen screen;

	if (screen.init() == false) {
		std::cout << "Error initializing SDL." << std::endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		int elapsed = SDL_GetTicks();
		int red = (1 + sin(elapsed * 0.01)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.02)) * 128;
		int blue = (1 + sin(elapsed * 0.03)) * 128;

		for (int y = 0; y < betaben::Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < betaben::Screen::SCREEN_WIDTH; x++) {

				//screen.setPixel(x, y, 128, 0, 255);

				/*int x1 = x % 200;
				int y1 = y % 200;

				if (y1 < 100) {
					if (x1 < 100) {
						screen.setPixel(x, y, 250, 250, 250);
					} else if (x1 >= 100) {
						screen.setPixel(x, y, 200, 150, 150);
					}
				} else if (y1 >= 100) {
					if (x1 < 100) {
						screen.setPixel(x, y, 200, 150, 150);
					} else if (x1 >= 100) {
						screen.setPixel(x, y, 250, 250, 250);
					}
				}*/

				screen.setPixel(x, y, red, green, blue);

			}
		}

		screen.update();

		if (screen.processEvents() == false) {
			break;
		}

	}

	screen.close();

	return 0;
}
