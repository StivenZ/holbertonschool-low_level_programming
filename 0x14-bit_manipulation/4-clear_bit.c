#include "holberton.h"
/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: input value
 * @index: index, starting from 0
 * Return: -1 if an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index < (sizeof(unsigned long int) * 8))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
