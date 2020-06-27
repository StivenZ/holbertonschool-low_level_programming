#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: string to compare
 * @s2: string compared to
 * Return: integer
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	i--;
	while (s2[j] != '\0')
	{
		j++;
	}
	j--;

	return ((i - j) * 15);
}
