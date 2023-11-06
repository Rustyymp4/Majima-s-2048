#include "sdlWindow.h"
#include "grid.h"
#include <SDL.h>
#include <SDL_image.h>



sdlWindow::sdlWindow()
{

	window = SDL_CreateWindow("Display", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, height, width, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

}