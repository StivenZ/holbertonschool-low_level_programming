#include "holberton.h"
/**
 * *_strcat - concatenates two strings
 * @dest: parameter
 * @src: parameter
 * temp: copy pointer
*/
char *_strcat(char *dest, char *src)
{
	char *temp;
	temp = dest;
	
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
dest = temp;
return (dest);
}
