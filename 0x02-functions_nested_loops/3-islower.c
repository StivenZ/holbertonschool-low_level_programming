#include "holberton.h"
/**
 * _islower - checks lower case characters
 * Return: nothing
 * @c: character
*/
int _islower(int c)
{
int n;
n = islower(c);
	if (n < 1)
	{
		_putchar(0);
	}
	else
	{
		_putchar('1');
	}
return (0);
}
