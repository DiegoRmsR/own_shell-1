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
		if (line == NULL)
			return;
		_puts(line);
		free(line);
	} while (1);
}
