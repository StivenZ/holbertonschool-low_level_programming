#include "holberton.h"
/**
 * prime - find if number is prime
 * @m: parameter
 * @n: number to evaluate
 * Return: 1 or -1
*/
int prime(int n, int m)
{

	if ((n % m == 0) || (n < 2))
	{
		return (0);
	}
	else if (m == n - 1)
	{
		return (1);
	}
	else if (m < n)
	{
		return (prime(n, m + 1));
	}
	return (1);
}

/**
 * is_prime_number - returns whether the number is primer or not
 * @n: parameter
 * Return: whether its prime or not
*/
int is_prime_number(int n)
{
	return (prime(n, 2));
}
