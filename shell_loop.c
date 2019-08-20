#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 *
 * Return: nothing
 */
void shell_loop(void)
{
	char *line;

	do {
		_puts("$ ");
		line = shell_read();
		_puts(line);
		free(line);
	} while (1);
}
