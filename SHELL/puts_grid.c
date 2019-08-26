#include "shell.h"
/**
 * puts_grid - prints vertically the elem. of a grid
 * @grid: grid
 * Return: nothing
 */
void puts_grid(char **grid)
{
	int i;

	for (i = 0; grid[i]; i++)
	{
		_puts("%s\n", grid[i]);
	}
}
