#include "holberton.h"
/**
 * _isupper - checks upper case characters
 * @c: character
 * Return: nothing
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);

}

void main(void)
{
	_isupper(0);
}
