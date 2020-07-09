#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - creates a pointer to a new space in memory with
 * a copy of the string given as a parameter
 * @str: string and pointer
 * Return: a pointer to a string
*/
char *_strdup(char *str)
{
	if (str[0] == '\0')
	{
		return ('\0');
	}

	int i = 0;
	char *du;

	while (str[i] != '\0')
	{
		i++;
	}

	du = (char *)malloc(sizeof(char) * i);

	if (!du)
	{
		return ('\0');
	}

	i = 0;

	while (str[i] != '\0')
	{
		du[i] = str[i];
		i++;
	}
	return (du);
}
