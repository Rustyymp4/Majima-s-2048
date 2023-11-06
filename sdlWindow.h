#pragma once

#include <SDL.h>
#include <SDL_image.h>

class sdlWindow
{
public:

	int width = 800;
	int height = 800;

	SDL_Window* window;
	SDL_Renderer* renderer;

	sdlWindow();
	void updateWin();
};