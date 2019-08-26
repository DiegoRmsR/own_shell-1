#include "shell.h"
/**
 * main - calls the shell loop.
 *
 * Return: EXIT_SUCCESS
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	shell_loop(env);

	return (0);
}
