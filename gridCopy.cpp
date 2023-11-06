#include "gridCopy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

//////INITIALISATION DE LA gridCopy//////


GridCopy::GridCopy(int grid[4][4])
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			gridCopy[i][j] = grid[i][j];
		}
	}
}



//////COMMANDES DE MOVEMENTS//////


bool GridCopy::upCheck()
{
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (gridCopy[i][j] != 0 and i > 0) {
				if (gridCopy[i - 1][j] == gridCopy[i][j]) {
					return 1;
				}
			}
		}
	}
	return 0;
}

bool GridCopy::leftCheck()
{
	for (int j = 1; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (gridCopy[i][j] != 0 and j > 0) {
				if (gridCopy[i][j - 1] == gridCopy[i][j]) {
					return 1;
				}
			}
		}
	}
	return 0;
	
}

bool GridCopy::downCheck()
{
	for (int i = 2; i > -1; i--) {
		for (int j = 0; j < 4; j++) {
			if (gridCopy[i][j] != 0 and i < 3) {
				if (gridCopy[i + 1][j] == gridCopy[i][j]) {
					return 1;
				}
			}
		}
	}
	return 0;
}

bool GridCopy::rightCheck()
{
	for (int j = 2; j > -1; j--) {
		for (int i = 0; i < 4; i++) {
			if (gridCopy[i][j] != 0 and j < 3) {
				if (gridCopy[i][j + 1] == gridCopy[i][j]) {
					return 1;
				}
			}
		}
	}
	return 0;
}