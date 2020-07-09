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

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	m = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", m);
	return (0);
}
