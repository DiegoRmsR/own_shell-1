#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 * @env: enviroment vars.
 * Return: nothing
 */
void shell_loop(char **env)
{
	char *line, *delim, **grid;
	int status, i;
	(void)env;
	/*get the path content*/
	/*token. PATH*/
	delim = " \t\r\a\n";
	do {
		_puts("$ ");
		line = shell_read();
		grid = shell_token(line, delim);
		status = shell_status(grid);
		free(line);
		i = 0;
		while(grid[i])
		{
			if(!grid[i])
				free(grid[i]);
			i++;
		}
		if (!grid)
			free(grid);
	} while (status);
	while(grid[i])
	{
		if(!grid[i])
			free(grid[i]);
		i++;
	}
	free(grid);
}
