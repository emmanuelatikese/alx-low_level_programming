#include "main.h"
/**
 * free_grid- Entry point
 *@grid: input gird is the first argument
 *@height: input height is the second argument
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	return(0);
}
