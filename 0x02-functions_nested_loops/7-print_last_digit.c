#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * Return: last digit
 * @d: provided number
*/
int print_last_digit(int d)
{
int a;
a = d % 10;
	if (d < 0)
	{
		a = a * (-1);
		_putchar(a + '0');
		return (a);
	}
	_putchar(a + '0');
	return (a);
}
