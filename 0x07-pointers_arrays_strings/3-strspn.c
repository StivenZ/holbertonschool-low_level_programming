#include "holberton.h"
/**
 * _strspn - gets length of a prefix
 * @s: initial segment
 * @accept: string to copy bytes from
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k;

	i = 0;
	j = 0;
	k = 0;

while (accept[j] != '\0')
{
/**
 * If characters are the same, loops until they are different or
 * until end of string is reached.
*/
	if (s[i] == accept[j])
	{
		while (s[i] == accept[j])
		{
			k++;
			i++;

			if (s[i] == '\0')
			{
				i = 0;
				j++;
			}
		}

		if ((s[i] == '\0') && (accept[j] == '\0'))
		{
			return (k);
		}
	}

/**
 * If characters are different, loops until they are the same or
 * till end of string is reached.
*/
	else if (s[i] != accept[j])
	{
		while (s[i] != accept[j])
		{
			s++;
			if ((s[i] == '\0') && (accept[j] == '\0'))
			{
				return (k);
			}
		}
	}
	

}
return (0);
}
