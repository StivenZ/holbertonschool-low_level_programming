#include "holberton.h"
/**
 * *_memcpy - copies n bytes of memory area into another one
 * @dest: target memory area
 * @src: info to copy from
 * @n: bytes of info to copy
 * Return: string dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *temp;

	i = 0;
	temp = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	dest = temp;
	return (dest);
}
