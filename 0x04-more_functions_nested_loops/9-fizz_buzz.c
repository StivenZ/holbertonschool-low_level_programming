#include <stdio.h>
#include "holberton.h"
/**
 * main - exectes fizz
 * Return: 0
*/
int main(void)
{
	_fizzbuzz();
	return (0);
}

/**
 * _fizzbuzz - prints numbers and fizz-buzz
 * i: parameter
*/
void _fizzbuzz(void)
{
int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz\n");
			}
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}
