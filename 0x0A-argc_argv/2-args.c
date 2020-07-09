#include <stdio.h>
/**
 * main - prints arguments followed by a new line
 * @argc: arguments count
 * @argv: array of arguments
 * Return: o
*/
int main(int argc, char **argv)
{
	int i = 0;
	(void)argc;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
