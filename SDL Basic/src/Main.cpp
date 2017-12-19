/*
 * My first SDL test
 */

#include <iostream>
#include "SDL.h"
#include <math.h>
#include "Screen.h"
#include <stdlib.h>
#include <time.h>
#include "Swarm.h"
using namespace betaben;

#define FRAME_VALUES 10

// An array to store frame times:
Uint32 frametimes[FRAME_VALUES];

// Last calculated SDL_GetTicks
Uint32 frametimelast;

// total frames rendered
Uint32 framecount;

// the value you want
float framespersecond;

void fpsinit() {

        // Set all frame times to 0ms.
        memset(frametimes, 0, sizeof(frametimes));
        framecount = 0;
        framespersecond = 0;
        frametimelast = SDL_GetTicks();

}

void fpsthink() {

        Uint32 frametimesindex;
        Uint32 getticks;
        Uint32 count;
        Uint32 i;

        // frametimesindex is the position in the array. It ranges from 0 to FRAME_VALUES.
        // This value rotates back to 0 after it hits FRAME_VALUES.
        frametimesindex = framecount % FRAME_VALUES;

        // store the current time
        getticks = SDL_GetTicks();

        // save the frame time value
        frametimes[frametimesindex] = getticks - frametimelast;

        // save the last frame time for the next fpsthink
        frametimelast = getticks;

        // increment the frame count
        framecount++;

        // Work out the current framerate

        // The code below could be moved into another function if you don't need the value every frame.

        // I've included a test to see if the whole array has been written to or not. This will stop
        // strange values on the first few (FRAME_VALUES) frames.
        if (framecount < FRAME_VALUES) {

                count = framecount;

        } else {

                count = FRAME_VALUES;

        }

        // add up all the values and divide to get the average frame time.
        framespersecond = 0;
        for (i = 0; i < count; i++) {

                framespersecond += frametimes[i];

        }

        framespersecond /= count;

        // now to make it an actual frames per second value...
        framespersecond = 1000.f / framespersecond;

}

int main() {

//	int color = 0x123456;
//
//	unsigned char red = (color & 0xFF0000) >> 16;
//	unsigned char blue = (color & 0x00FF00) >> 8;
//	unsigned char green = color & 0x0000FF;
//
//	std::cout << std::hex << (int)red << std::endl;
//
//	unsigned char redAgain = color >> 16;
//	std::cout << std::hex << (int)redAgain << std::endl;

	fpsinit();

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		std::cout << "Error initializing SDL." << std::endl;
	}

	Swarm swarm ;

	int screenWidth2 = Screen::SCREEN_WIDTH/2;
	int screenHeight2 = Screen::SCREEN_HEIGHT/2;

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		fpsthink();

		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		const Particle * const pParticles = swarm.getParticles();

		unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

//		screen.clear();

		for(int i=0; i<Swarm::NPARTICLES; i++){

			Particle pParticle = pParticles[i];

			int x = (pParticle.m_x + 1)*(screenWidth2);
			int y = pParticle.m_y*screenWidth2 + screenHeight2;

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

		screen.boxBlur();

		screen.update();

		if (screen.processEvents() == false) {
			break;
		}

		std::cout << "FPS: " << framespersecond << std::endl;

	}

	screen.close();

	return 0;
}
