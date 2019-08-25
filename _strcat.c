#include "shell.h"
/**
 * _strcat - concatenates two strings
 * @str1: string one
 * @str2: string2 two
 * Return: size total
 */
char *_strcat(char *str1, char *str2)
{
	unsigned int length_str1 = 0;
	unsigned int length_str2 = 0;
	unsigned int length_total = 0;
	char *str_dest;
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	length_str1 = _strlen(str1);
	length_str2 = _strlen(str2);
	length_total = (length_str1 + length_str2 + 1);
	str_dest = malloc(length_total * sizeof(char));
	if (!str_dest)
		return (NULL);
	for (count1 = 0; count1 < length_str1; count1++)
		str_dest[count1] = str1[count1];
	str_dest[count1] = '/';
	for (count2 = 0; count2 < length_str2 + 1; count1++, count2++)
		str_dest[count1 + 1] = str2[count2];
	str_dest[count1] = '\0';
	return (str_dest);
}
