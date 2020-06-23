#include "holberton.h"
/**
 * swap_int - swaps value of two integers
 * @a: parameter
 * @b: parameter
 * b1: temporal b value
*/
void swap_int(int *a, int *b)
{
int b1;
	b1 = *b;
	*b = *a;
	*a = b1;
}
