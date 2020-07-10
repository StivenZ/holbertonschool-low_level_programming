#include "holberton.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory size
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int bs1, bs2, bytes, i, j;
	char *p;

	bs1 = 0;
	bs2 = 0;

	while (s1[bs1] != '\0')
	{
		bs1++;
	}

	while (s2[bs2] != '\0')
	{
		bs2++;
	}

	if (n > bs2)
	{
		n = bs2;
	}

	if (!s1)
	{
		s1 = '\0';
	}
	if (!s2)
	{
		s2 = '\0';
	}

	bytes = (bs1 + n);

	p = malloc(bytes);
	if (!p)
	{
		return (NULL);
	}

	while (i < bs1)
	{
		p[i] = s1[i];
		i++;
	}

	j = i;
	i = 0;

	while (j < bytes)
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	return (p);
}
