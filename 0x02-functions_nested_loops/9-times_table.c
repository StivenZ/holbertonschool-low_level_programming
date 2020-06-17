#include "holberton.h"
/**
 * times_table - prints table 9
 *
 */
void times_table(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 0)
			{
				_putchar(0 + '0');
			}
			else if (((i * j) < 10))
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
