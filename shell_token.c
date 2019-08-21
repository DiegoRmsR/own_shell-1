#include "shell.h"

char **shell_token(char *line)
{
	int bfsz = BUF_SZ_TOK, obfsz = 0;
	int pos = 0;
	char **grid;
	char *delim = " \t\n";

	grid = malloc(bfsz * sizeof(char*));
	if (!grid)
	{
		_puts("alloc. error");
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
			bfsz += BUF_SZ_TOK;
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
