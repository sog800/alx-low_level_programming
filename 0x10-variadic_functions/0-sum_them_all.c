#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - adding numbers
 * @n: constant function
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);
		sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
