#include "holberton.h"
/**
 * root - reckon square root
 * Return: square root
 * @n: base
 * @b: square root
*/
int root(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	else if (b * b > n)
	{
		return (-1);
	}
	return (root(n, b + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: base
 * Return: Square root, -1 if it does not exist
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 1));
}
