#include "holberton.h"
/**
 * print_rev - prints a reverse string
 * @s: string parameter
*/
void print_rev(char *s)
{
int i;
int j;
i = 0;

/** Character count */

	while (s[i] != '\0')
	{
	i++;
	}

/** Reverse print */

j = i - 1;
	while (j >= 0)
	{
	_putchar(s[j]);
	j--;
	}
_putchar('\n');
}
