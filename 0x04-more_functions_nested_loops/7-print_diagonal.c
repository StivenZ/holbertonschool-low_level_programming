#include "holberton.h"
/**
 * print_diagonal - Prints diagonal lines
 * @n: line long parameter
 * i: parameter
 * j: parameter
*/
void print_diagonal(int n)
{
int i, j;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		j = 0;
			while (j < i)
			{
				_putchar(32);
				j++;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
