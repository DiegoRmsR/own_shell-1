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
	int bfsz = BUF_SZ;

	filters = malloc(bfsz * sizeof(char *));
	filters[0] = full_file;
	for (i = 1; grid[i]; i++)
	{
		filters[i] = grid[i];
	}
	filters[i + 1] = '\0';
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
		if (execve(new_grid[0], new_grid, environ) == -1)
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
	if (!tmp)
	{
		_puts("alloc. error");
		exit(EXIT_FAILURE);
	}
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
int shell_path(char **grid)
{
	char *full_file;
	char **new_grid;
	int i, j, l;
	char *path_con = NULL;
	char **path_dir = NULL;
	path_con = _getenv("PATH");
	path_dir = shell_token(path_con, ":");

	/*find the file in the directory*/
	for (i = 0; path_dir[i]; i++)
	{
		full_file = file_match(grid[0], path_dir[i]);
		if (full_file)
		{
			new_grid = grid_cpy(full_file, grid);
			j = path_exe(new_grid);
			l = 0;
			while(new_grid[l])
			{
				if (!new_grid[l])
					free(new_grid[l]);
				l++;
			}
			free(new_grid);
			free(full_file);
			return (j);
		}
		if (!full_file)
			free(full_file);
	}
	return (0);
}
