#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer parameter
 * @n: n elements to be printed
 * i: parameter
*/
void print_array(int *a, int n)
{
int i;

i = 0;

	while (i < n)
	{
	if (a[i] != '\0')
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
	i++;
	}
	}
}
