#include "grid.h"
#include "sdlWindow.h"
#include <SDL.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char** argv)
{
	
	/*testFusionUp();
	testFusionDown();
	testFusionLeft();
	testFusionRight();
	testDoubleFusion();*/
	while (1) {
		Grid grid;

		grid.game();

		if (grid.again == -1){
			break;
		}
	}

	return 0;
}

void testFusionUp() 
{
	Grid grid;

	grid.grid[0][0] = 2;
	grid.grid[1][0] = 2;
	grid.up(1, 0);
	if (grid.grid[0][0] == 4) {
		std::cout << "success";
	}
	else {
		std::cout << "failure";
	}
};

void testFusionLeft()
{
	Grid grid;

	grid.grid[0][0] = 2;
	grid.grid[0][1] = 2;
	grid.left(0, 1);
	if (grid.grid[0][0] == 4) {
		std::cout << "success";
	}
	else {
		std::cout << "failure";
	}
};

void testFusionDown() 
{
	Grid grid;

	grid.grid[0][0] = 2;
	grid.grid[1][0] = 2;
	grid.down(0, 0);
	if (grid.grid[3][0] == 4) {
		std::cout << "success";
	}
	else {
		std::cout << "failure";
	}
};

void testFusionRight()
{
	Grid grid;

	grid.grid[0][0] = 2;
	grid.grid[0][1] = 2;
	grid.right(0, 0);
	if (grid.grid[0][3] == 4) {
		std::cout << "success";
	}
	else {
		std::cout << "failure";
	}
};

void testDoubleFusion()
{
	Grid grid;

	grid.grid[0][0] = 2;
	grid.grid[1][0] = 2;
	grid.grid[2][0] = 2;
	grid.grid[3][0] = 2;
	for (int k = 0; k > 4 ; k++) {
		grid.up(k, 0);
	}
	if (grid.grid[0][0] == 8) {
		std::cout << "failure";
	}
	else {
		std::cout << "success";
	}
}

