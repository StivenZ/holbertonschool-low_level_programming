#include "holberton.h"
/**
 * *_strpbrk - locates the first occurrence of s
 * inside *accept.
 * @s: string to find
 * @accept: where to seek
 * Return: a pointer to s
*/
char *_strpbrk(char *s, char *accept)
{

	int j;

	j = 0;

	while (*s != '\0')
	{

		while (accept[j] != '\0')
		{
			if (accept[j] == *s)
			{
				return (s);
			}
			j++;
		}
	j = 0;
	s++;
	}

	if (*s == '\0')
	{
		return ("NULL");
	}

	return (s);
}
