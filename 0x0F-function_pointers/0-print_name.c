#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name: name of the person to be printed
 * @f: pointer to functions
*/
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;

	f(name);
}
