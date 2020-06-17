#include "holberton.h"
/**
 * jack_bauer - prints minutes in 24 hours, but they're actually every second, not every minute, other way it would be s
 * shorter
 * Return: whatever
 * @i, j, k, l: secods & minutes
*/
void jack_bauer(void)
{
int i, j, k, l;
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
                                        _putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
