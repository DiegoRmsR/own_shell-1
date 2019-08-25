#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
 /**
  * main - fork example
  *
  * Return: Always 0.
  */
void shell_execute(char *argv[])
{
	char ar;
	pid_t wt;
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == 0)
	{
		ar =  execve(argv[0], argv, NULL);
		if (ar == -1)
		{
			perror("Error:");
		}
	}
	wt = wait(NULL);
	if (wt == -1)
	{
		perror("./././hsh: 1: not found");
	}
}
