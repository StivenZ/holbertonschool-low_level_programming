#include "holberton.h"
/**
 * _strlen - calculates the length of a string
 * @s: parameter string
 * Return: length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
return (i);
}
