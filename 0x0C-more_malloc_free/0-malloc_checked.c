#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - returns a pointer to the allocated memory
 * @b: memory amount
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (!s)
	{
		exit(98);
	}
	return (s);
}
