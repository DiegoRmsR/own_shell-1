#include "shell.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: compare
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}
