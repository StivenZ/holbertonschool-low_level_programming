#include "holberton.h"
/**
 * print_numbers - prints 0123456789
*/
void print_numbers(void)
{
int i;

i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
_putchar('\n');
}
