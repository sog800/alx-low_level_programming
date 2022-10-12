#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - printing a name
 * name: to be printed
 * f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(0);
	f(name);
}
