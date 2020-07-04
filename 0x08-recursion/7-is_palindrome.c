#include "holberton.h"
/**
 * palin - determines whether a string is a palindrome or not
 * @s: string
 * @count: string beginning
 * @len: string end
 * Return: 1 or 0
*/
int palin(char *s, int count, int len)
{
	if (count >= len)
	{
		return (1);
	}

	if (s[count] == s[len])
	{
		return (palin(s, count + 1, len - 1));
	}
	return (0);
}
/**
 * _strlen_recursion - prints length of a string
 * @s: string
 * Return: string length
*/
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);

}
/**
 * is_palindrome - determines wheter a string is palindrome or not
 * @s: string
 * Return: 0 or 1
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	int count = 0;

	return (palin(s, count, len - 1));
}
