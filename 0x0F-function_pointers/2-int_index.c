#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 0)
		{
			i++;
			continue;
		}
		return (i);
	}

	return (-1);
}
