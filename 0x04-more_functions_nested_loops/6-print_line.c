#include "holberton.h"
/**
 * print_line - prints lines
 * i: parameter
 * @n: input of line count
*/
void print_line(int n)
{
int i;
	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	}
_putchar('\n');
}
