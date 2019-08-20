#include "shell.h"
/**
 *
 *
 *
 *
 */
char *shell_read(void)
{
	char *line = NULL;
	size_t size = 0;

	getline(&line, &size, STDIN_FILENO);
	return (line);
}
