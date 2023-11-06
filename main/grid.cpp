#include "grid.h"
#include "gridCopy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

//////INITIALISATION DE LA GRID//////


Grid::Grid()
{
	srand((unsigned int)time(0));
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			grid[i][j] = 0;
		}
	}
	while (count < 2) {
		int randomI = rand() % 4;
		int randomJ = rand() % 4;
		int randomChoice = rand() % 2;
		if (grid[randomI][randomJ] == 0) {
			if (randomChoice == 0) {
				grid[randomI][randomJ] = 2;
				count++;
			}
			if (randomChoice == 1) {
				grid[randomI][randomJ] = 4;
				count++;
			}
		}
	}
}

//////AFFICHAGE DE LA GRID//////

 void Grid::displayGrid()
 {
	SDL_Rect rectFS = { 0, 0, 800, 800 };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			int x = j * 200;
			int y = i * 200;


			SDL_Rect rect = { x, y, 200, 200};
			if (grid[i][j] == 0) {
				SDL_Surface* Tile0 = NULL;
				SDL_Texture* texture0 = NULL;
				Tile0 = SDL_LoadBMP("0.bmp");
				texture0 = SDL_CreateTextureFromSurface(renderer, Tile0);
				SDL_FreeSurface(Tile0);
				SDL_RenderCopy(renderer, texture0, NULL, &rect);
				SDL_DestroyTexture(texture0);
			}
			else if (grid[i][j] == 2) {

				SDL_Surface* Tile2 = NULL;
				SDL_Texture* texture2 = NULL;
				Tile2 = SDL_LoadBMP("2.bmp");
				texture2 = SDL_CreateTextureFromSurface(renderer, Tile2);
				SDL_FreeSurface(Tile2);
				SDL_RenderCopy(renderer, texture2, NULL, &rect);
				SDL_DestroyTexture(texture2);
			}
			else if (grid[i][j] == 4) {

				SDL_Surface* Tile4 = NULL;
				SDL_Texture* texture4 = NULL;
				Tile4 = SDL_LoadBMP("4.bmp");
				texture4 = SDL_CreateTextureFromSurface(renderer, Tile4);
				SDL_FreeSurface(Tile4);
				SDL_RenderCopy(renderer, texture4, NULL, &rect);
				SDL_DestroyTexture(texture4);
			}
			else if (grid[i][j] == 8) {

				SDL_Surface* Tile8 = NULL;
				SDL_Texture* texture8 = NULL;
				Tile8 = SDL_LoadBMP("8.bmp");
				texture8 = SDL_CreateTextureFromSurface(renderer, Tile8);
				SDL_FreeSurface(Tile8);
				SDL_RenderCopy(renderer, texture8, NULL, &rect);
				SDL_DestroyTexture(texture8);
			}
			else if (grid[i][j] == 16) {

				SDL_Surface* Tile16 = NULL;
				SDL_Texture* texture16 = NULL;
				Tile16 = SDL_LoadBMP("16.bmp");
				texture16 = SDL_CreateTextureFromSurface(renderer, Tile16);
				SDL_FreeSurface(Tile16);
				SDL_RenderCopy(renderer, texture16, NULL, &rect);
				SDL_DestroyTexture(texture16);
			}
			else if (grid[i][j] == 32) {

				SDL_Surface* Tile32 = NULL;
				SDL_Texture* texture32 = NULL;
				Tile32 = SDL_LoadBMP("32.bmp");
				texture32 = SDL_CreateTextureFromSurface(renderer, Tile32);
				SDL_FreeSurface(Tile32);
				SDL_RenderCopy(renderer, texture32, NULL, &rect);
				SDL_DestroyTexture(texture32);
			}
			else if (grid[i][j] == 64) {

				SDL_Surface* Tile64 = NULL;
				SDL_Texture* texture64 = NULL;
				Tile64 = SDL_LoadBMP("64.bmp");
				texture64 = SDL_CreateTextureFromSurface(renderer, Tile64);
				SDL_FreeSurface(Tile64);
				SDL_RenderCopy(renderer, texture64, NULL, &rect);
				SDL_DestroyTexture(texture64);
			}
			else if (grid[i][j] == 128) {

				SDL_Surface* Tile128 = NULL;
				SDL_Texture* texture128 = NULL;
				Tile128 = SDL_LoadBMP("128.bmp");
				texture128 = SDL_CreateTextureFromSurface(renderer, Tile128);
				SDL_FreeSurface(Tile128);
				SDL_RenderCopy(renderer, texture128, NULL, &rect);
				SDL_DestroyTexture(texture128);
			}
			else if (grid[i][j] == 256) {

				SDL_Surface* Tile256 = NULL;
				SDL_Texture* texture256 = NULL;
				Tile256 = SDL_LoadBMP("256.bmp");
				texture256 = SDL_CreateTextureFromSurface(renderer, Tile256);
				SDL_FreeSurface(Tile256);
				SDL_RenderCopy(renderer, texture256, NULL, &rect);
				SDL_DestroyTexture(texture256);
			}
			else if (grid[i][j] == 512) {

				SDL_Surface* Tile512 = NULL;
				SDL_Texture* texture512 = NULL;
				Tile512 = SDL_LoadBMP("512.bmp");
				texture512 = SDL_CreateTextureFromSurface(renderer, Tile512);
				SDL_FreeSurface(Tile512);
				SDL_RenderCopy(renderer, texture512, NULL, &rect);
				SDL_DestroyTexture(texture512);
			}
			else if (grid[i][j] == 1024) {

				SDL_Surface* Tile1024 = NULL;
				SDL_Texture* texture1024 = NULL;
				Tile1024 = SDL_LoadBMP("1024.bmp");
				texture1024 = SDL_CreateTextureFromSurface(renderer, Tile1024);
				SDL_FreeSurface(Tile1024);
				SDL_RenderCopy(renderer, texture1024, NULL, &rect);
				SDL_DestroyTexture(texture1024);
			}
			else if (grid[i][j] == 2048) {

				SDL_Surface* Tile2048 = NULL;
				SDL_Texture* texture2048 = NULL;
				Tile2048 = SDL_LoadBMP("2048.bmp");
				texture2048 = SDL_CreateTextureFromSurface(renderer, Tile2048);
				SDL_FreeSurface(Tile2048);
				SDL_RenderCopy(renderer, texture2048, NULL, &rect);
				SDL_DestroyTexture(texture2048);
			}
		}
	}
	if (victory == 1) {
		SDL_Delay(1000);
		SDL_Surface* VS = NULL;
		SDL_Texture* textureVS = NULL;
		VS = SDL_LoadBMP("WinScreen.bmp");
		textureVS = SDL_CreateTextureFromSurface(renderer, VS);
		SDL_FreeSurface(VS);
		SDL_RenderCopy(renderer, textureVS, NULL, &rectFS);
		SDL_RenderPresent(renderer);
		SDL_DestroyTexture(textureVS);
		if (again == 0){
			SDL_RenderPresent(renderer);
			SDL_Delay(3000);
			SDL_Surface* RS = NULL;
			SDL_Texture* textureRS = NULL;
			RS = SDL_LoadBMP("RetryScreen.bmp");
			textureRS = SDL_CreateTextureFromSurface(renderer, RS);
			SDL_FreeSurface(RS);
			SDL_RenderCopy(renderer, textureRS, NULL, &rectFS);
			SDL_RenderPresent(renderer);
			SDL_DestroyTexture(textureRS);
		}
	}
	if (defeat == 1) {
		SDL_Delay(3000);
		SDL_Surface* LS = NULL;
		SDL_Texture* textureLS = NULL;
		LS = SDL_LoadBMP("LoseScreen.bmp");
		textureLS = SDL_CreateTextureFromSurface(renderer,LS);
		SDL_FreeSurface(LS);
		SDL_RenderCopy(renderer, textureLS, NULL, &rectFS);
		SDL_RenderPresent(renderer);
		SDL_DestroyTexture(textureLS);
		if (again == 0) {
			SDL_RenderPresent(renderer);
			SDL_Delay(1000);
			SDL_Surface* RS = NULL;
			SDL_Texture* textureRS = NULL;
			RS = SDL_LoadBMP("RetryScreen.bmp");
			textureRS = SDL_CreateTextureFromSurface(renderer, RS);
			SDL_FreeSurface(RS);
			SDL_RenderCopy(renderer, textureRS, NULL, &rectFS);
			SDL_RenderPresent(renderer);
			SDL_DestroyTexture(textureRS);
		}
	}
	SDL_RenderPresent(renderer);
}

//////COMMANDES DE MOVEMENTS//////


void Grid::up(int i, int j)
{
	if (grid[i][j] != 0 and i > 0) {
		if (grid[i - 1][j] == 0) {
			grid[i - 1][j] = grid[i][j];
			grid[i][j] = 0;
			up(i - 1, j);
		}
		if (grid[i - 1][j] == grid[i][j]) {
			grid[i - 1][j] = grid[i][j] * 2;
			grid[i][j] = 0;
			up(i - 1, j);
		}
	}
}

void Grid::left(int i, int j)
{
	if (grid[i][j] != 0 and j > 0) {
		if (grid[i][j - 1] == 0) {
			grid[i][j - 1] = grid[i][j];
			grid[i][j] = 0;
			left(i, j - 1);
		}
		if (grid[i][j - 1] == grid[i][j]) {
			grid[i][j - 1] = grid[i][j] * 2;
			grid[i][j] = 0;
			left(i, j - 1);
		}
	}
}

void Grid::down(int i, int j)
{
	if (grid[i][j] != 0 and i < 3) {
		if (grid[i + 1][j] == 0) {
			grid[i + 1][j] = grid[i][j];
			grid[i][j] = 0;
			down(i + 1, j);
		}
		if (grid[i + 1][j] == grid[i][j]) {
			grid[i + 1][j] = grid[i][j] * 2;
			grid[i][j] = 0;
			down(i + 1, j);
		}
	}
}

void Grid::right(int i, int j)
{
	if (grid[i][j] != 0 and j < 3) {
		if (grid[i][j + 1] == 0) {
			grid[i][j + 1] = grid[i][j];
			grid[i][j] = 0;
			right(i, j + 1);
		}
		if (grid[i][j + 1] == grid[i][j]) {
			grid[i][j + 1] = grid[i][j] * 2;
			grid[i][j] = 0;
			right(i, j + 1);
		}
	}
}


//////COMMANDES DE LANCEMENT DU JEU//////


void Grid::game()
{
	bool jouage;
	int count;
	bool change;
	while (!victory and !defeat) {
		jouage = 0;
		count = 0;
		GridCopy gridCopy(grid);
		change = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gridCopy.grid[i][j] = grid[i][j];
			}
		}
		displayGrid();
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.scancode == SDL_SCANCODE_Z or event.key.keysym.scancode == SDL_SCANCODE_W or event.key.keysym.scancode ==  SDL_SCANCODE_UP) {
				for (int i = 1; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						up(i, j);
					}
				}
				jouage = 1;
			}
			if (event.key.keysym.scancode == SDL_SCANCODE_Q or event.key.keysym.scancode == SDL_SCANCODE_A or event.key.keysym.scancode == SDL_SCANCODE_LEFT) {
				for (int j = 1; j < 4; j++) {
					for (int i = 0; i < 4; i++) {
						left(i, j);
					}
				}
				jouage = 1;
			}
			if (event.key.keysym.scancode == SDL_SCANCODE_S or event.key.keysym.scancode == SDL_SCANCODE_DOWN) {
				for (int i = 2; i > -1; i--) {
					for (int j = 0; j < 4; j++) {
						down(i, j);
					}
				}
				jouage = 1;
			}
			if (event.key.keysym.scancode == SDL_SCANCODE_D or event.key.keysym.scancode == SDL_SCANCODE_RIGHT) {
				for (int j = 2; j > -1; j--) {
					for (int i = 0; i < 4; i++) {
						right(i, j);
					}
				}
				jouage = 1;
			}
		}
		if (jouage == 1){
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (gridCopy.grid[i][j] != grid[i][j])
					{
						change = 1;
						break;
					}
				}
			}

			if (change == 1) {
				change = 0;
				while (1) {
					int randomI = rand() % 4;
					int randomJ = rand() % 4;
					int randomChoice = rand() % 2;
					if (grid[randomI][randomJ] == 0) {
						if (randomChoice == 0) {
							grid[randomI][randomJ] = 2;
							break;
						}
						if (randomChoice == 1) {
							grid[randomI][randomJ] = 4;
							break;
						}
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (grid[i][j] != 0) {
						count += 1;
					}
					if (grid[i][j] == 2048) {
						victory = 1;
						displayGrid();
					}
				}
			}
			if (count == 16) {
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						gridCopy.grid[i][j] = grid[i][j];
					}
				}
				change = gridCopy.upCheck();
				if (change == 0){
					change = gridCopy.downCheck();
				}
				if (change == 0) {
					change = gridCopy.leftCheck();
				}
				if (change == 0) {
					change = gridCopy.rightCheck();
				}
				if (change == 0) {
					defeat = 1;
					displayGrid();
				}
			}
		}
	}
	while (victory or defeat){
		SDL_Event event;
		SDL_WaitEvent(&event);
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE) {
				again = -1;
				break;
			}
		}
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.scancode == SDL_SCANCODE_RETURN) {
				again = 1;
				break;
			}
		}
	}
};