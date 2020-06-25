#include "holberton.h"
/**
 * rev_string - reverses a string from its root
 * @s: parameter string
 * i: parameter
 * j: parameter
*/
void rev_string(char *s)
{
	int i, j;
	char t[1024];

	i = 0;
	j = 0;

	while ((t[i] = s[i]) != '\0')
	{
		i++;
	}
	i--;
	while ((s[j] = t[i]) && (i > 0))
	{
		i--;
		j++;
	}
}
