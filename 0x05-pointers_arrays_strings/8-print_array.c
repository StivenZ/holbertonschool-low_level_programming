#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: pointer parameter
 * @n: n elements to be printed
*/
void print_array(int *a, int n)
{
int i;

i = 0;

if (n < 0)
{
	n = -n;
}
	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
	i++;
	}
}
