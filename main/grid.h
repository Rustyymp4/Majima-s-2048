#pragma once
#include "sdlWindow.h"

class Grid : sdlWindow
{
public:

	int grid[4][4];
	bool victory = 0;
	bool defeat = 0;
	int again = 0;

	Grid();

	void displayGrid();

	void up(int i, int j);
	void left(int i, int j);
	void down(int i, int j);
	void right(int i, int j);

	void game();
};