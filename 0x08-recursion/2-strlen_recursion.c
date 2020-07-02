#include "holberton.h"
/**
 * _strlen_recursion - prints length of a string
 * @s: string
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (1);
	}
	return (_strlen_recursion(s + 1) + 1);

}
