#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: string parameter
 * i: parameter
 * n: parameter
*/
void puts_half(char *str)
{
int i, n;
i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
	n = (i / 2);

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}

	else if (i % 2 != 0)
	{
		n = ((i - 1) / 2) + 1;

			while (str[n] != '\0')
			{
				_putchar(str[n]);
				n++;
			}
	}
_putchar('\n');
}
