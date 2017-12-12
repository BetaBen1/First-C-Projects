/*
 * My first SDL test
 */

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include <stdlib.h>
#include <time.h>
#include "Swarm.h""
using namespace betaben;

int main() {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		std::cout << "Error initializing SDL." << std::endl;
	}

	Swarm swarm ;

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		const Particle * const pParticles = swarm.getParticles();

		int elapsed = SDL_GetTicks();

		unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

		for(int i=0; i<Swarm::NPARTICLES; i++){

			Particle pParticle = pParticles[i];

			int x = (pParticle.m_x + 1)*(Screen::SCREEN_WIDTH/2);
			int y = (pParticle.m_y + 1)*(Screen::SCREEN_HEIGHT/2);

			screen.setPixel(x, y, red, green, blue);

		}

		/*
		for (int y = 0; y < betaben::Screen::SCREEN_HEIGHT; y++) {
			for (int x = 0; x < betaben::Screen::SCREEN_WIDTH; x++) {

				//screen.setPixel(x, y, 128, 0, 255);

				int x1 = x % 200;
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
				}

				screen.setPixel(x, y, red, green, blue);


			}
		}
		*/

		screen.update();

		if (screen.processEvents() == false) {
			break;
		}

	}

	screen.close();

	return 0;
}
