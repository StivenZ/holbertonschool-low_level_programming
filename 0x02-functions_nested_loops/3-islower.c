#include "holberton.h"
/**
 * _islower - checks lower case characters
 * @c: character
 * Return: nothing
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
return (0);
}
