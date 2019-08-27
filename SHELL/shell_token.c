#include "shell.h"
/**
 * shell_token - token. a line
 * @line: string
 * @delim: delim string
 * Return: grid with the tokens.
 */
char **shell_token(char *line, char *delim)
{
	int bfsz = BUF_SZ, obfsz = 0;
	int pos = 0;
	char **grid;
	char *tok;

	grid = malloc(bfsz * sizeof(char *));

	if (!grid)
	{
		_puts("alloc. error");
		exit(EXIT_FAILURE);
	}
	tok = strtok(line, delim);
	while (1)
	{
		if (tok == NULL)
		{
			grid[pos] = NULL;
			break;

		}
		grid[pos] = tok;
		pos++;
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
		tok = strtok(NULL, delim);
		
	}
	return (grid);
}
