#include <stdio.h>
/**
 * main - prints number of arguments pass to it
 * @argc: number of arguments
 * @argv: array
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
