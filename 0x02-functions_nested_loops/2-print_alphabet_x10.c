#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Returns: nothing
*/
void print_alphabet_x10(void)
{
int j;
int i;
j = 0;
while (j <= 9)
{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
_putchar('\n');
j++;
}
}
