#include "holberton.h"
/**
 * *_strstr - locates a string
 * @haystack: string to look inside
 * @needle: string to find within haystack
 * Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	char * in;

	i = 0;
	in = haystack;

	while ((*haystack != needle[i]) && (*haystack != '\0'))
	{
		haystack++;
		if (*haystack == needle[0])
		{
			in = haystack;

			while (*haystack == (needle[i] != '\0'))
			{
				haystack++;
				i++;
				if (needle[i] == '\0')
				{
					haystack = in;
					return (haystack);
				}
			}
		}
	i = 0;
	}
	return (0);
}
