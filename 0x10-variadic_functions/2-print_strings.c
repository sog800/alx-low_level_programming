#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - printing strings
 * @separator: separator
 * @number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char *) == NULL)
			{
				printf("(null)");
			}
			else
			{
				printf("%s", va_arg(ap, char *));
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char *) == NULL)
			{
				printf("(null)%s", separator);
			}
			else
			{
				printf("%s%s", va_arg(ap, char *), separator);
			}
		}
	}
	printf("\n");
}
