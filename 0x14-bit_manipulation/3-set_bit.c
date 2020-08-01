#include "holberton.h"
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: input value
 * @index: index, starting from 0
 * Return: -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index < (sizeof(unsigned long int) * 8))
	{
		(*n) >> index = ~((*n) >> index);
		return (1);
	}
	else
		return (-1);
}
