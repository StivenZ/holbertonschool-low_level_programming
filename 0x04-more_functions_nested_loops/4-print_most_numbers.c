#include "holberton.h"
/**
 * print_most_numbers - but 2 and 4
 * i: count parameter
*/
void print_most_numbers(void)
{
int i;

i = 0;
	while (i != 2 && i != 4 && i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
