#include "variadic_functions.h"
/**
 * print_numbers - prints strings
 * @separator: separates printed strings
 * @n: number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list init;
	unsigned int i;

	va_start(init, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(init, const unsigned int));
		if ((i < n - 1) && (*separator != '\0'))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(init);
}
