#include "shell.h"
/**
 * free_grid - returns a pointer to a 2 dimensional array of integers.
 * @grid: matrix
 * @height: height of the grid
 *
 * Return: pointer.
 */
void free_grid(char **grid)
{
	int j;

	for (j = 0; grid[j]; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
