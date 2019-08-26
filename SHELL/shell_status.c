#include "shell.h"
/**
 * shell_execute - determines if the tokens are executable or not.
 * @grid: pointer of tokens
 * Return: status
 */
int shell_execute(char **grid)
{
	/*int i;*/

	/*Nothing comming*/
	if (grid[0] == NULL)
		return (1);
	/*PATH commands*/
	else if (shell_path(grid[0], grid))
		return (1);
	/*builtins*/
	/*exe commands or no valid*/
	else
		return (shell_process(grid));
}
