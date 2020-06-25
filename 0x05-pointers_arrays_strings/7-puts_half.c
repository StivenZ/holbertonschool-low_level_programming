#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: string parameter
 * i: parameter
 * j: parameter
*/
void puts_half(char *str)
{
int i, j;
i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	i--;

	if (i % 2 == 0)
	{
	j = i / 2;
		while (str[j] != '\0')
		{
		_putchar(str[j]);
		j++;
		}
	}

	else if (i % 2 != 0)
	{
	j = (i - 1) / 2;
		while (str[j] != '\0')
		{
		_putchar(str[j]);
		j++;
		}
	}
_putchar('\n');
}
