/*
 * Screen.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: Ben
 */
#include <SDL.h>
#include <iostream>
#include "Screen.h"
#include "Swarm.h"

namespace betaben {

short redTotal;
short blueTotal;
short greenTotal;

int currentX;
int currentY;

Uint32 color;

Uint8 red;
Uint8 blue;
Uint8 green;

Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer1(NULL), m_buffer2(NULL) {

}

bool Screen::init() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "SDL init failed" << std::endl;
		return 1;
	}

	m_window = SDL_CreateWindow("Particle Fire Explosion",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (m_window == NULL) {
		SDL_Quit();
		return 1;
	}

	m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
	m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

	if (m_renderer == NULL) {
		std::cout << "Could not create renderer" << std::endl;
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return 3;
	}

	if (m_texture == NULL) {
		std::cout << "Could not create texture" << std::endl;
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return 4;
	}

	m_buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
	m_buffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

	memset(m_buffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	memset(m_buffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

	return true;
}

void Screen::boxBlur(){
	// Swap the buffers, so pixel info is in m_buffer2 and we are drawing to m_buffer1
	Uint32 *temp = m_buffer1;

	m_buffer1 = m_buffer2;
	m_buffer2 = temp;

	// Looks at the pixels around it and takes the average of the pixels to create a blur

	for(short y=0; y<SCREEN_HEIGHT; y++){
		for(short x=0; x<SCREEN_WIDTH; x++){

			redTotal = 0;
			greenTotal = 0;
			blueTotal = 0;

			for(short row=-1; row<=1; row++){
				for(short col=-1; col<=1; col++){
					currentX = x+col;
					currentY = y+row;

					if(currentX >= 0 && currentX < SCREEN_WIDTH && currentY >=0 && currentY < SCREEN_HEIGHT){
						color = m_buffer2[currentY*SCREEN_WIDTH + currentX];

						red = color >> 24;
						green = color >> 16;
						blue = color >> 8;

						redTotal += red;
						greenTotal += green;
						blueTotal += blue;
					}

				}
			}

			red = redTotal/9;
			green = greenTotal/9;
			blue = blueTotal/9;

			setPixel(x, y, red, green, blue);

		}
	}

}

void Screen::clear(){
	memset(m_buffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
	//memset(m_buffer2, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue){

	if(x < 0 || x >= SCREEN_WIDTH || y < 0 || y >= SCREEN_HEIGHT){
		return;
	}

	Uint32 color = 0;

	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	color += 0xFF;

	m_buffer1[(y * SCREEN_WIDTH) + x] = color;

}

void Screen::update(){
	SDL_UpdateTexture(m_texture, NULL, m_buffer1, SCREEN_WIDTH * sizeof(Uint32));
	SDL_RenderClear(m_renderer);
	SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_renderer);
}

bool Screen::processEvents() {
	SDL_Event event;
	while (SDL_PollEvent (&event)) {
		if (event.type == SDL_QUIT) {
			return false;
		}
	}
	return true;
}

void Screen::close() {
	delete[] m_buffer1;
	delete[] m_buffer2;
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyTexture(m_texture);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}
} /* namespace betaben */
