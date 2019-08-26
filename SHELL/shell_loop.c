#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 *
 * Return: nothing
 */
void shell_loop(void)
{
	char *line, *delim, **grid;
	int status;

	delim = " \t\r\a\n";
	do {
		_puts("$ ");
		line = shell_read();
		grid = shell_token(line, delim);
		status = shell_execute(grid);
		free(line);
		free(grid);
	} while(status);
}
