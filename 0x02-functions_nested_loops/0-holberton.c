#include "holberton.h"
/**
 * main - prints "Holberton"
 * Return: returns 0
*/
int main(void)
{
char hol[9] = "Holberton";
int i;
for (i = 0; i <= 8; i++)
{
	_putchar(hol[i]);
}
_putchar('\n');
return (0);
}
