#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @dest: parameter
 * @char: parameter
 * @src: parameter
 * @n: parameter
 * i: parameter
*/
char *_strncpy(char *dest, char *src, int n)
{

	char *temp;
	int i;

	i = 0;
	temp = dest;

	while ((*src != '\0') && (i < n))
	{
	*dest = *src;
	dest++;
	src++;
	i++;
	}
	
	while (i < n)
	{
		*dest = '\0';
		i++;
	}

	dest = temp;
	return (dest);

}
