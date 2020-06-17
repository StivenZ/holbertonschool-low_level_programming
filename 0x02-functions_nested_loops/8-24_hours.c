#include "holberton.h"
/**
 * jack_bauer - prints minutes in 24 hours,
 * but they're actually every second, not every minute,
 * other way it would be shorter
 * Return: whatever
 * @i, j: secods & minutes
*/
void jack_bauer(void)
{
int i, j;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
		}
	}
}
