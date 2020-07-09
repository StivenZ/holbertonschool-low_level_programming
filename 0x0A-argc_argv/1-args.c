#include <stdio.h>
/**
 * main - prints number of arguments pass to it
 * @argc: number of arguments
 * @argv: array
*/

int main(int argc, char **argv)
{
	if (*argv[0] != '\0')
	{
		printf("%d\n", argc);
	}
	return (0);
}
