#include "shell.h"
/**
 * shell_read - get the line
 *
 * Return: the line
 */
char *shell_read(char **path_dir)
{
	char *line = NULL;
	size_t sz = 0;
	int flag, i;

	flag = getline(&line, &sz, stdin);
	if (flag == -1)
	{
		free(line);
		free(path_dir);
		exit(EXIT_FAILURE);
	}
	line[flag - 1] = '\0';
	return (line);
}
