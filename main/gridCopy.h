#pragma once

class GridCopy
{
public:

	int gridCopy[4][4] ;
	int grid[4][4];


	GridCopy(int grid[4][4]);

	bool upCheck();
	bool leftCheck();
	bool downCheck();
	bool rightCheck();


};