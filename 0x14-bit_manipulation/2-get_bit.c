#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: input value
 * @index: index, starting from 0
 * Return: -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if ((n == 0) && (index == 0))
		return (0);

	while ((n >> i) >= 0)
	{
		if (i == index)
		{
			return ((n >> i) & 1);
		}
		i++;
	}

	return (-1);
}
