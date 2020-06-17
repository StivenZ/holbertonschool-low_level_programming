#include "holberton.h"
/**
 * print_sign - prints 1, 0 or -1 if positive, 0, or negative
 * Return: 1, 0, -1
 * @n: character
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
