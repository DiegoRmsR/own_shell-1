#include "shell.h"
/**
 * shell_process - create a child process and wait until it ends.
 * @grid: pointer to tokens
 * Return: 1 on success or exit in errors
 */
int shell_process(char **grid)
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
		if (execve(grid[0], grid, environ) == -1)
		{
			_puts("\ash: No such file or directory\n");
			exit(0);
		}
	}
	else
	{
		waitpid(child, &status, WUNTRACED);
	}
	return (1);
}
