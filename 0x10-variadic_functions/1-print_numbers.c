#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: amount of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator[0] == '\0')
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");
}
