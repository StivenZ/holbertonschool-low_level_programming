#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two numbers
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, j, k;

	j = 0;
	i = 1;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (argc > 2)
	{
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				if (isdigit(argv[i][k]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				k++;
			}
			j = j + atoi(argv[i]);
			i++;
		}
		printf("%d\n", j);
	}
	return (0);
}
