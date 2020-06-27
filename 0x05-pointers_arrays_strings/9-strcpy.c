#include "holberton.h"
/**
 * *_strcpy - copies a string
 * @dest: parameter
 * @src: parameter
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

j = 0;

	while (j <= i)
	{
		dest[j] = src[j];
		if (dest[j] == '\0')
		{
			break;
		}
	j++;
	}
return (dest);
}
