#include "shell.h"
/**
 * grid_cpy - creates a cpy of a grid
 * @full_file: dir + file
 * @grid: grid
 * Return: new grid
 */
char **grid_cpy(char *full_file, char **grid)
{
	int i;
	char **filters;

	filters = malloc(BUF_SZ * sizeof(char *));
	filters[0] = full_file;
	for (i = 1; grid[i]; i++)
	{
		filters[i] = grid[i];
	}
	return (filters);
}
/**
 * path_exe - create a child process and wait until it ends.
 * @new_grid: grid with the new [0] parameter
 * Return: 1 on success or exit in errors
 */
int path_exe(char **new_grid)
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
		if (execve(new_grid[0], new_grid, NULL) == -1)
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
		return (tmp);
	return (NULL);
}
/**
 * shell_path - look if the token is a file in the path dir.
 * @grid: tokenized line.
 * @path_dir: PATH dirs.
 * Return: 1 success or 0 if not
 */
int shell_path(char **grid, char **path_dir)
{
	char *full_file;
	char **new_grid;
	int i;

	/*find the file in the directory*/
	for (i = 0; path_dir[i]; i++)
	{
		full_file = file_match(grid[0], path_dir[i]);
		if (full_file)
		{
			new_grid = grid_cpy(full_file, grid);
			path_exe(new_grid);
			return (1);
		}
	}
	return (0);
}
