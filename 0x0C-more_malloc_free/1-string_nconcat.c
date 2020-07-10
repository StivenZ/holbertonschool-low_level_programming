#include "holberton.h"
/**
 * sizes - determines sizes of strings and turns to empty string
 * @a: string
 * Return: string size
*/
int sizes(char *a)
{
	unsigned int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

	i = 0;
	bs1 = 0;
	bs2 = 0;

	if (!s1)
		s1 = '\0';
	if (!s2)
		s2 = '\0';
	bs1 = sizes(s1);
	bs2 = sizes(s2);

	if (n > bs2)
		n = bs2;

	bytes = (bs1 + n);
	p = malloc(bytes);
	if (!p)
		return (NULL);
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
