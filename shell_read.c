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
	size_t sz = 0;

	getline(&line, &sz, stdin);
	return (line);
}
