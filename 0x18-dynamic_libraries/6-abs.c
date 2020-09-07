#include "holberton.h"
/**
 * _abs - computes absolute value of a number
 * Return: absolute value
 * @b: number
 */
int _abs(int b)
{
	if (b < 0)
	{
		return (b * (-1));
	}
	return (b);
}
