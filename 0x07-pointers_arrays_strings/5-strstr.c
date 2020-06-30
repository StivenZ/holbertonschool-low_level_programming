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
	char *in;

	i = 0;
	in = haystack;

	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			in = haystack;

			while (in[i] == needle[i])
			{
				if (needle[i] == '\0')
				{
					haystack = in;
					return (haystack);
				}
				i++;
			}
			i = 0;
		}
		haystack++;
	}
	return (0);
}
