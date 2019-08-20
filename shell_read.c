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
	int flag;

	flag = getline(&line, &sz, stdin);
	if (flag == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
