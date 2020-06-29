#include "holberton.h"
/**
 * *_memset - fills n bytes with constant b
 * @s: pointed area to fill
 * @b: constant to fill space with
 * @n: numbers of bytes to fill
 * Return: string s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *temp;
	unsigned int i;

	temp = s;
	i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	s = temp;
	return (s);
}
