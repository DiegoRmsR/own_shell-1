#include "shell.h"
/**
 * shell_token - token. a line
 * @line: string
 * @delim: delim string
 * Return: grid with the tokens.
 */
char **shell_token(char *line, char *delim)
{
	int bfsz = 10, obfsz = 0;
	int pos = 0;
	char **grid;

	grid = malloc(bfsz * sizeof(char *));

	if (!grid)
	{
		_puts("lsh: allocation error");
		exit(EXIT_FAILURE);
	}
	grid[pos] = strtok(line, delim);
	pos++;
	while (1)
	{
		grid[pos] = strtok(NULL, delim);
		if (grid[pos] == NULL)
			return (grid);
		if (pos >= bfsz)
		{
			obfsz = bfsz;
			bfsz += BUF_SZ;
			grid = _realloc(grid, obfsz, bfsz);
			if (!grid)
			{
				_puts("alloc. error");
				exit(EXIT_FAILURE);
			}
		}
		pos++;
	}
}
