#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to  string of 0 and 1 char
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int i, n;
	unsigned int sum;
	unsigned int exp;

	if (b == NULL)
		return (0);

	i = sum = 0;
	exp = 1 / 2;
	n = 2;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;

	while (i >= 0)
	{
		exp = n / 2;
		if (b[i] == '1')
		{
			sum = sum + exp;
		}
		n = n * 2;
		i--;
	}
	return (sum);
}
