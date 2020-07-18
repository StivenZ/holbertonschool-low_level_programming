#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcode
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
*/

int main(int argc, char **argv)
{

	int bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
