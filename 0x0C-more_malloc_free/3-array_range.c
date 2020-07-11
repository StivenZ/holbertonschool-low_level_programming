#include "holberton.h"
/**
 * *array_range - creates an array of strings
 * @min: starting value
 * @max: top value
 * Return: pointer to a new array
*/
int *array_range(int min, int max)
{
	int i;
	int *pointer;

	i = min;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc((max - min + 1) * sizeof(int));

	if (!pointer)
	{
		return (NULL);
	}

	while (i <= max)
	{
		pointer[i - min] = i;
		i++;
	}

	return (pointer);
}
