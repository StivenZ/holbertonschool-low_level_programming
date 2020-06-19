#include "holberton.h"
/**
 * print_triangle - prints triangles
 * @size: stands for triangle size
 * i: parameter
 * j: parameter
*/
void print_triangle(int size)
{
int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		j = 0;
			while (j < size)
			{
				if (j >= (size - i))
				{
				_putchar(35);
				}
				else
				{
				_putchar(32);
				}
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
