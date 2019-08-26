#include "shell.h"
char *var_name(char *var)
{
	int i;
	char *v_name;

	v_name = malloc(1024);
	if (!v_name)
	{
		printf("Alloc. error");
		exit(1);
	}
	for (i = 0; var[i] != '='; i++)
		v_name[i] = var[i];
	v_name[i] = '\0';
	return (v_name);
}
int _strmatch(const char *name, char *var)
{
	int i;

	for (i = 0; name[i] && var[i]; i++)
	{
		if (name[i] != var[i])
			return (0);
	}
	if (name[i] != var[i])
		return (0);
	return (1);
}
char *var_con(char *var)
{
	int i;

	for (i = 0; var[i] != '='; i++)
		;
	return (var + i + 1);
}
/**
 * _getenv - 
 *
 *
 */
char *_getenv(char **env, const char *name)
{
	char *v_name;
	int i;

	for (i = 0; env[i]; i++)
	{
		v_name = var_name(env[i]);
		if (_strmatch(name, v_name))
		{
			free(v_name);
			return (var_con(env[i]));
		}
		free(v_name);
	}
	return (NULL);
}
