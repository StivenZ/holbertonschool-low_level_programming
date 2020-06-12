#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Prints numbers between 0 and 6 with characters
* Return: positive of negative number
**/
int main(void)
{
	int n;
	int lt_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lt_d = n % 10;
	if (lt_d > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lt_d);
	}
	else if (lt_d == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lt_d);
	}
	else if (lt_d < 6 && lt_d != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt_d);
	}
	return (0);
}
