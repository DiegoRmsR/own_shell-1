#include "shell.h"
/**
 * shell_status - determines if the tokens are executable or not.
 * @grid: pointer of tokens
 * Return: status
 */
int shell_status(char **grid,char **path_dir)
{
	/*int i;*/

	/*Nothing comming*/
	if (grid[0] == NULL)
		return (1);
	/*builtins*/
	
	/*PATH commands*/
	if (grid[0][0] != '/')
	{
		shell_path(grid, path_dir);
		return (1);
	}
	/*exe commands or no valid*/
	else
		return (shell_process(grid));
}
