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
	if (size == 0)
	{
		return (NULL);
	}

	ar = (char *)malloc(size);
	ar[0] = c;

	return (*ar);
}
