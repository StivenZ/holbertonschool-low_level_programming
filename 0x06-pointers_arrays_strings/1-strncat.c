#include "holberton.h"
/**
 * *_strncat - Concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * i: temporary
 * j: parameter
 * k: parameter
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

j = i;
k = 0;
	while (i < (n + j) && (src[k] != '\0'))
	{
		dest[i] = src[k];
		i++;
		k++;
	}

	return (dest);
}
