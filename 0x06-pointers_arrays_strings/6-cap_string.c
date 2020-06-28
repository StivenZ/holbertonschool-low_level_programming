#include "holberton.h"
/**
 * *cap_string - capitalizes every word
 * @s: parameter string
 * Return: string
*/
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			if ((s[i - 1] == ' ') || (s[i - 1] == '\t') || (s[i - 1] == '\n') ||
			(s[i - 1] == ',') || (s[i - 1] == ';') || (s[i - 1] == '.') ||
			(s[i - 1] == '?') || (s[i - 1] == '!') || (s[i - 1] == '\"') ||
			(s[i - 1] == '(') || (s[i - 1] == ')') || (s[i - 1] == '{') ||
			(s[i - 1] == '}'))
			{
				s[i] = s[i] - 32;
			}
		}
	i++;
	}

	return (s);
}
