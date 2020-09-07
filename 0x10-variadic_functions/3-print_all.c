#include "variadic_functions.h"
/**
 * print_all - prints everithing
 * @format: array
*/
void print_all(const char * const format, ...)
{
	int i;
	va_list init;
	char *string;

	i = 0;
	va_start(init, format);

while (format && format[i])
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(init, int));
			break;
		case 'i':
			printf("%d", va_arg(init, int));
			break;
		case 'f':
			printf("%f", va_arg(init, double));
			break;
		case 's':
			string = va_arg(init, char *);
			if (string != NULL)
			{
				printf("%s", string);
				break;
			}
			printf("(nil)");
			break;
		default:
			i++;
			continue;
	}
	if (format[i + 1])
		printf(", ");
	i++;
}
	printf("\n");
	va_end(init);
}
