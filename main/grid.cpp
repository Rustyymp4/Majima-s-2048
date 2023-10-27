#include "grid.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

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

	system("CLS");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (grid[i][j] > 1000) {
				std::cout << BLUE << grid[i][j] << RESET << "|";
			}
			else if (grid[i][j] > 100) {
				std::cout << " " << GREEN << grid[i][j] << RESET << "|";
			}
			else if (grid[i][j] > 10) {
				std::cout << "  " << MAGENTA << grid[i][j] << RESET << "|";
			}
			else if (grid[i][j] < 10 && grid[i][j] != 0) {
				std::cout << "   " << RED << grid[i][j] << RESET << "|";
			}
			else {
				std::cout << "   " << BLACK << grid[i][j] << RESET << "|";
			}
		}
		std::cout << std::endl;
	}

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
	bool victory = 0;
	while (!victory) {
		int count = 0;
		Grid gridCopy;
		bool change = 0;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				gridCopy.grid[i][j] = grid[i][j];
			}
		}
		char movement;
		displayGrid();
		std::cout << "use zqsd or wasd to move ";
		std::cin >> movement;
		if (movement == 'z' or movement == 'w') {
			for (int i = 1; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					up(i, j);
				}
			}
		}
		else if (movement == 'q' or movement == 'a') {
			for (int j = 1; j < 4; j++) {
				for (int i = 0; i < 4; i++) {
					left(i, j);
				}
			}
		}
		else if (movement == 's') {
			for (int i = 2; i > -1; i--) {
				for (int j = 0; j < 4; j++) {
					down(i, j);
				}
			}
		}
		else if (movement == 'd') {
			for (int j = 2; j > -1; j--) {
				for (int i = 0; i < 4; i++) {
					right(i, j);
				}
			}
		}
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
					std::cout << "Tu as gangé";
					break;
				}
			}
		}
		if (count == 16) {
			count = 0;
			change = 0;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					gridCopy.grid[i][j] = grid[i][j];
				}
			}
			for (int i = 1; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					gridCopy.up(i, j);
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (gridCopy.grid[i][j] != grid[i][j])
					{
						change = 1;
						break;
					}
				}
			}
			if (change == 0) {
				for (int i = 2; i > -1; i--) {
					for (int j = 0; j < 4; j++) {
						gridCopy.down(i, j);
					}
				}
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (gridCopy.grid[i][j] != grid[i][j])
						{
							change = 1;
							break;
						}
					}
				}
			}
			if (change == 0) {
				for (int j = 1; j < 4; j++) {
					for (int i = 0; i < 4; i++) {
						gridCopy.left(i, j);
					}
				}
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (gridCopy.grid[i][j] != grid[i][j])
						{
							change = 1;
							break;
						}
					}
				}
			}
			if (change == 0) {
				for (int j = 1; j < 4; j++) {
					for (int i = 0; i < 4; i++) {
						gridCopy.left(i, j);
					}
				}
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (gridCopy.grid[i][j] != grid[i][j])
						{
							change = 1;
							break;
						}
					}
				}
			}
			if (change == 0) {
				for (int j = 2; j > -1; j--) {
					for (int i = 0; i < 4; i++) {
						gridCopy.right(i, j);
					}
				}
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (gridCopy.grid[i][j] != grid[i][j])
						{
							change = 1;
							break;
						}
					}
				}
			}
			std::cout << change;
			if (change == 1) {
				victory = 1;
				displayGrid();
				std::cout << "L + Ratio + Skill Issue + Rip Bozo + Fatherless + Stay Mad + No Bitches";
			}
		}
	}
};