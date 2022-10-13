#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - printing a name
 * @name: to be printed
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		exit(1);
	}
	f(name);
}
