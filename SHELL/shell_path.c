#include "shell.h"
/**
 * grid_cpy - creates a cpy of a grid
 * @grid: grid
 * Return: new grid
 */
char **grid_cpy(char *full_file, char **grid)
{
	int i;
	char **filters;

	filters = malloc(BUF_SZ * sizeof(char*));
	filters[0] = full_file;
	for (i = 1; grid[i]; i++)
	{
		filters[i] = grid[i];
	}
	return(filters);
}
/**
 * path_exe - create a child process and wait until it ends.
 * @full_file: full file name
 * @grid: pointer to tokens
 * Return: 1 on success or exit in errors
 */
int path_exe(char **filters)
{
	int status = 1;
	pid_t child;

	child = fork();
	if (child == -1)
	{
		_puts("Fork error\n");
	}
	else if (child == 0)
	{
		if (execve(filters[0], filters, NULL) == -1)
		{
			_puts("\ash: ERROR\n");
			exit(0);
		}
	}
	else
	{
		waitpid(child, &status, WUNTRACED);
	}
	return (1);
}
/**
 * file_match - look if the token is a file in the path dir.
 * @file: file's name
 * @dir: grid of dir. in the PATH
 * Return: file with dir
 */
char *file_match(char *file, char *dir)
{
	char *tmp;
	struct stat st;
	int bfsz = BUF_SZ;

	tmp = malloc(bfsz * sizeof(char));
	_strcpy(tmp, dir);
	_strcat(tmp, "/");
	_strcat(tmp, file);
	if (stat(tmp, &st) == 0)
		return(tmp);
	return (NULL);
}
/**
 * shell_path - look if the token is a file in the path dir.
 * @file: file's name
 * Return: 1 success or 0 if not
 */
int shell_path(char *file, char **grid)
{
	char *path_con;
	char **dir;
	char *delim;
	char *full_file;
	char **filters;
	int i;

	/*get the path content*/
	path_con = _getenv("PATH");
	/*token. PATH*/
	delim = ":";
	dir = shell_token(path_con, delim);
	/*find the file in the directory*/
	for (i = 0; dir[i]; i++)
	{
		if ((full_file = file_match(file, dir[i])))
		{
			filters = grid_cpy(full_file, grid);
			path_exe(filters);
			free(filters);
			free(full_file);
			free(dir);
			free(path_con);
			return (1);
		}
	}
	free(path_con);
	free(full_file);
	free(dir);
	return(0);
}
