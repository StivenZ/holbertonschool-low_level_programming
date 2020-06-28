#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of int
 * @a: array
 * @n: elements of the array
*/
void reverse_array(int *a, int n)
{
	int *f, *p;
	int i, j;

	f = a;
	p = a;
	i = 0;

	while (i < n)
	{
		i++;
		f++;
	}
f--;

	while (a < f)
	{
		j = *a;
		*a = *f;
		*f = j;
		a++;
		f--;
	}
	a = p;
}
