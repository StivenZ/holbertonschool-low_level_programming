#include "holberton.h"
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: initial number provided by external force my dear, let it differenciate
 * return: 0
*/
void print_to_98(int n)
{
int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
				printf("%d\n", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
				printf("%d\n", i);
		}
	}
}
