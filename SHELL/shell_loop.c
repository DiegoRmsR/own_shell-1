#include "shell.h"
/**
 * shell_loop - wait for a string a process it.
 *
 * Return: nothing
 */
void shell_loop(char **env)
{
	char *line, *delim, *path_con, **grid ,**path_dir;
	int status;

	/*get the path content*/
	path_con = _getenv(env, "PATH");
	/*token. PATH*/
	delim = ":";
	path_dir = shell_token(path_con, delim);
	delim = " \t\r\a\n";
	do {
		_puts("$ ");
		line = shell_read();
		grid = shell_token(line, delim);
		status = shell_status(grid, path_dir);
		free(line);
		free(grid);
	} while(status);
}
