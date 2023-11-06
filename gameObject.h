#pragma once
#include "sdlWindow.h"

class gameObject
{
public:

	int w_case = 800 / 4;
	int h_case = 800 / 4;
	int i_case;
	int j_case; 
	int value;

	SDL_Renderer* renderer;

	SDL_Texture* texture0 = NULL;
	SDL_Texture* texture2 = NULL;
	SDL_Texture* texture4 = NULL;
	SDL_Texture* texture8 = NULL;
	SDL_Texture* texture16 = NULL;
	SDL_Texture* texture32 = NULL;
	SDL_Texture* texture64 = NULL;
	SDL_Texture* texture128 = NULL;
	SDL_Texture* texture256 = NULL;
	SDL_Texture* texture512 = NULL;
	SDL_Texture* texture1024 = NULL;
	SDL_Texture* texture2048 = NULL;

	gameObject(int i_case, int j_case, int value, SDL_Renderer* renderer);
	void initImage();

};