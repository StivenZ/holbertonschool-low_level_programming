#include "holberton.h"
/**
 * _isdigit - checks wether digit or not
 * @c: input
 * Return: 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
