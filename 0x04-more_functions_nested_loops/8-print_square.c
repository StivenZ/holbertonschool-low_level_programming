#include "holberton.h"
/**
 * print_square - prints a brick nxn large
 * @size: bricks measurement
 * i: parameter
 * j: parameter
*/
void print_square(int size)
{
int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
		j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
