#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array
 * @size: array size
 * @c: character
 * Return: pointer to a char
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	i = 0;

	ar = malloc(sizeof(char) * size);

	if (size == 0 || !ar)
	{
		return (NULL);
	}


	while (i <= size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
