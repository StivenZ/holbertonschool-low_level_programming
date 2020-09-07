#include "holberton.h"
/**
 * flip_bits - calculates the number of bits I have to flip
 * to get from one number to another one
 * @n: number to flip
 * @m: number to change to
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned int i, count;

	r = n ^ m;
	i = count = 0;

	while (i < (sizeof(unsigned long int) * 8))
	{
		if (((r >> i) & 1) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
