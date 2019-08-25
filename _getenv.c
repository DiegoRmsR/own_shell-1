#include "shell.h"
/**
 *
 *
 *
 */
int _getenv(__attribute__((unused))int argc, __attribute__((unused))char **env, char **argv)
{
	int i = 0;

	for (i = 0; argv[i] != '\0'; i++)
	{
		printf("%s\n", argv[i]);
	}
	return(0);
}
