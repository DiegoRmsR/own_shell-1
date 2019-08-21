#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 *
 * Return: nothing
 */
void shell_loop(void)
{
	char *line, **grid;

	do {
		_puts("$ ");
		line = shell_read();
		if (line == NULL)
			return;
		grid = shell_token(line);
		_puts_grid(grid);
		free(line);
		free(grid);
	} while (1);
}
