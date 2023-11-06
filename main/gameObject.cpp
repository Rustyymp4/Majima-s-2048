#include "gameObject.h"
#include <SDL.h>
#include <SDL_image.h>

gameObject::gameObject(int i_case, int j_case, int value, SDL_Renderer* renderer)
{
	initImage();
	this->i_case = i_case;
	this->j_case = j_case;
	this->value = value;
	this->renderer = renderer;

	int x = j_case * w_case;
	int y = i_case * h_case;

	SDL_Rect rect = { x, y, w_case, h_case };
	if (value == 0){
		SDL_RenderCopy(renderer, texture0, NULL, &rect);
	}
	else if (value == 2) {
		SDL_RenderCopy(renderer, texture2, NULL, &rect);
	}
	else if (value == 4) {
		SDL_RenderCopy(renderer, texture4, NULL, &rect);
	}
	else if (value == 8) {
		SDL_RenderCopy(renderer, texture8, NULL, &rect);
	}
	else if (value == 16) {
		SDL_RenderCopy(renderer, texture16, NULL, &rect);
	}
	else if (value == 32) {
		SDL_RenderCopy(renderer, texture32, NULL, &rect);
	}
	else if (value == 64) {
		SDL_RenderCopy(renderer, texture64, NULL, &rect);
	}
	else if (value == 128) {
		SDL_RenderCopy(renderer, texture128, NULL, &rect);
	}
	else if (value == 256) {
		SDL_RenderCopy(renderer, texture256, NULL, &rect);
	}
	else if (value == 512) {
		SDL_RenderCopy(renderer, texture512, NULL, &rect);
	}
	else if (value == 1024) {
		SDL_RenderCopy(renderer, texture1024, NULL, &rect);
	}
	else if (value == 2048) {
		SDL_RenderCopy(renderer, texture2048, NULL, &rect);
	}

}

void gameObject::initImage()
{
	SDL_Surface* Tile0 = NULL;
	Tile0 = SDL_LoadBMP("WinScreen.bmp");
	texture0 = SDL_CreateTextureFromSurface(renderer, Tile0);
	SDL_FreeSurface(Tile0);

	SDL_Surface* Tile2 = NULL;
	Tile2 = SDL_LoadBMP("2.bmp");
	texture2 = SDL_CreateTextureFromSurface(renderer, Tile2);
	SDL_FreeSurface(Tile2);

	SDL_Surface* Tile4 = NULL;
	Tile4 = SDL_LoadBMP("4.bmp");
	texture4 = SDL_CreateTextureFromSurface(renderer, Tile4);
	SDL_FreeSurface(Tile4);

	SDL_Surface* Tile8 = NULL;
	Tile8 = SDL_LoadBMP("8.bmp");
	texture8 = SDL_CreateTextureFromSurface(renderer, Tile8);
	SDL_FreeSurface(Tile8);

	SDL_Surface* Tile16 = NULL;
	Tile16 = SDL_LoadBMP("16.bmp");
	texture16 = SDL_CreateTextureFromSurface(renderer, Tile16);
	SDL_FreeSurface(Tile16);

	SDL_Surface* Tile32 = NULL;
	Tile32 = SDL_LoadBMP("32.bmp");
	texture32 = SDL_CreateTextureFromSurface(renderer, Tile32);
	SDL_FreeSurface(Tile32);

	SDL_Surface* Tile64 = NULL;
	Tile64 = SDL_LoadBMP("64.bmp");
	texture64 = SDL_CreateTextureFromSurface(renderer, Tile64);
	SDL_FreeSurface(Tile64);

	SDL_Surface* Tile128 = NULL;
	Tile128 = SDL_LoadBMP("128.bmp");
	texture128 = SDL_CreateTextureFromSurface(renderer, Tile128);
	SDL_FreeSurface(Tile128);

	SDL_Surface* Tile256 = NULL;
	Tile256 = SDL_LoadBMP("256.bmp");
	texture256 = SDL_CreateTextureFromSurface(renderer, Tile256);
	SDL_FreeSurface(Tile256);

	SDL_Surface* Tile512 = NULL;
	Tile512 = SDL_LoadBMP("512.bmp");
	texture512 = SDL_CreateTextureFromSurface(renderer, Tile512);
	SDL_FreeSurface(Tile512);

	SDL_Surface* Tile1024 = NULL;
	Tile1024 = SDL_LoadBMP("1024.bmp");
	texture1024 = SDL_CreateTextureFromSurface(renderer, Tile1024);
	SDL_FreeSurface(Tile1024);

	SDL_Surface* Tile2048 = NULL;
	Tile2048 = SDL_LoadBMP("2048.bmp");
	texture2048 = SDL_CreateTextureFromSurface(renderer, Tile2048);
	SDL_FreeSurface(Tile2048);

}
