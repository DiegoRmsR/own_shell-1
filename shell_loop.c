/**
 * shell_loop - wait for a string a process it.
 *
 * Return: nothing
 */
void shell_loop(void)
{
	char *line;

	do {
		_puts("$ ");
		line = shell_read(void);
		_puts(line);
		free(line);
	} while (1);
}
