#include "holberton.h"
/**
 * *_strchr - finds the character c if exists
 * @s: string
 * @c: character to find
 * Return: pointer to c or NULL
*/
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if ((*s == '\0') == c)
		{
			return (s);
		}
	}
	return (0);
}
