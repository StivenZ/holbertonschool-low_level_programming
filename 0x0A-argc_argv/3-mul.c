#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: arguments number
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char **argv)
{
	int m;

	m = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 2)
	{
		printf("Error\n");
	}

	printf("%d\n", m);
	return (0);
}
