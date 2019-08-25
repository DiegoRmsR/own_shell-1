#include <stdlib.h>
#include <stdio.h>
int main ()
{
	char *env;
	char tok;
	int i;

	env = getenv("PATH");
	tok = strtok(env, ":");
	for (i = 0; env[i] < ; i++)
	{
		strlen()
		printf("PATH=%s\n", env);
	}
	tok = strtok(NULL, env);
	return(0);
}
