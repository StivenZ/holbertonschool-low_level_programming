#include "holberton.h"
/**
 * _strspn - gets length of a prefix
 * @s: initial segment
 * @accept: string to copy bytes from
 * Return: bytes of *S within *accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	i = 0;
	k = 0;
	j = 0;

	while (s[i] != '\0')
	{
		if (s[i] == accept[j])
		{
			k++;
			i++;
			j = 0;
			continue;
		}

		else if (s[i] != accept[j])
		{
			j++;
			if (accept[j] == '\0')
			{
				break;
			}
		}
	}
	return (k);
}
