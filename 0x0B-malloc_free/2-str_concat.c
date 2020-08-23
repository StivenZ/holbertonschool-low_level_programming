#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *new_string;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	i = j = 0;

	if ((len1 < 0) && (len2 < 0))
	{
		new_string = malloc(sizeof(char) * (len1 + len2 - 1));
	}

	if (((len1 == 0) && (len2 < 0)) || ((len1 =< 0) && (len2 == 0)))
	{
		new_string = malloc(sizeof(char) * (len1 + len2));
	}
	else
	{
		new_string = malloc(sizeof(char));
		if (!new_string)
			return (NULL);
		new_string[0] = '\0';
		return (new_string);
	}

	if (!new_string)
		return (NULL);

	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_string[i + j] = s2[j];
		j++;
	}

	new_string[i + j] = '\0';
	return (new_string);
}

/**
 * _strlen - calculates length of the string
 * @str: pointer to string
 * Return: integer number of the size
*/
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		i++;
	}

	return (i + 1);
}
