#include "variadic_functions.h"
/**
 * print_strings - prints strigns
 * @separator: separates input arguments
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list init;
	unsigned int i;
	char *string;

	va_start(init, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(init, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(init);
}
