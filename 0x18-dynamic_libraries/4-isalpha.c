#include "holberton.h"
/**
 * _isalpha - prints 1 if input is lowercase or uppercase
 * Return: nothing
 * @c: character
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
