#include "search_algos.h"
/**
 * binary_search - implemented binary search algorithm.
 * @array: int array.
 * @size: size of the array.
 * @value: int to be found.
 * Return: index at value or -1 if failure.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		print_array(r, l);

		mid = (l + r) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	return (-1);
}

/**
 * print_array - prints current state of the array.
 * @right: right edge of the array.
 * @left: left edge of the array.
*/
void print_array(size_t right, size_t left)
{
	size_t i = left;

	printf("Searching in array: ");
	while (i <= right)
	{
		if (i == right)
			printf("%ld\n", i);
		else
			printf("%ld, ", i);
		i++;
	}
}
