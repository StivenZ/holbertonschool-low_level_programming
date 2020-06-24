#include "holberton.h"
/**
 * rev_string - reverses a string from its root
 * @s: parameter string
 * i: parameter
 * j: parameter
*/
void rev_string(char *s)
{
	int j;
	int i;
	char cp[1000];

	i = 0;

	while ((cp[i] = s[i]) != '\0')
	{
		i++;
	}
	i--;
	j = 0;

	while ((s[j] = cp[i]) && (i > 0))
	{
		j++;
		i--;
	}
}
