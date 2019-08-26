#include "shell.h"
/**
 * shell_read - get the line
 *
 * Return: the line
 */
char *shell_read(void)
{
	char *line = NULL;
	size_t sz = 0;
	int flag;

	flag = getline(&line, &sz, stdin);
	if (flag == -1)
	{
		free(line);
		exit(1);
	}
	line[flag] = '\0';
	return (line);
}
