#include "holberton.h"
/**
 * more_numbers - prints more numbers
 * i: parameter
 * j: parameter
*/
void more_numbers(void)
{
int i, j;
j = 0;
	for (i = 0; i <= 9; i++)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(1 + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
	_putchar('\n');
	j = 0;
	}
}
