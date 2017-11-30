/*
 * My first SDL test
 */

#include <iostream>
#include <SDL.h>

int main(){

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		std::cout << "SDL init failed" << std::endl;
		return 1;
	}

	SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL){
		SDL_Quit();
		return 1;
	}

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
	SDL_Texture *texture = SDL_CreateTexture(window, SDL_PIXELFORMAT_RGBA8888, );

	bool quit = false;
	SDL_Event event;

	while(!quit){
		// Update particles
		// Draw particles
		// Check for messages/events

		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}

	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}
