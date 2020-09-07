#include "function_pointers.h"
/**
 * array_iterator - executes a parameter-like function
 * @array: array of functions
 * @size: size of the array
 * @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array)
		return;

	if (!action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
