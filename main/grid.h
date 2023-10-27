#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define WHITE   "\033[37m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define RED     "\033[31m"

class Grid
{
public:

	int grid[4][4];

	Grid();

	void displayGrid();

	void up(int i, int j);
	void left(int i, int j);
	void down(int i, int j);
	void right(int i, int j);

	void game();


};