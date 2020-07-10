#include "holberton.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: memory size
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int bs1, bs2, bytes, i, j;
	char *p;

	i = 0;
	bs1 = strlen(s1);
	bs2 = strlen(s2);

	if (n > bs2)
	{
		n = bs2;
	}

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

/**
 * Determine the size of the final memory space
*/
	bytes = (bs1 + n);

/**
 * Allocate the memory space in p with @bytes
*/
	p = malloc(bytes);
	if (!p)
	{
		return (NULL);
	}
/**
 * printf("bs1 = %d, and bs2 = %d\n, bytes = %d", bs1, bs2, bytes);
 * Copy the string
*/
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
