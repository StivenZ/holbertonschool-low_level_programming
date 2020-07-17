#include "3-calc.h"
/**
 * main - gets the input and executes the operations
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0
*/
int main(int argc, char **argv)
{

	int a, b, c;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (*argv[2] != '/' && *argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	c = get_op_func(argv[2])(a, b);

	printf("%d\n", c);

	return (0);
}
