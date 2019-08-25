#include "shell.h"
/**
 * _strlen - Print the length
 * @str: string
 * Return: len
 */

int _strlen(char *str)
{
	unsigned int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
