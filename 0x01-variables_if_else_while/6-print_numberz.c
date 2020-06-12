#include <stdio.h>
/**
 * main - prints single digit, no char numbers within 0-9
 * Return: 0
 */
int main(void)
{
int i;
	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
putchar('\n');
return (0);
}
