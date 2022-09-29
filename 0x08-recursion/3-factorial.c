#include "main.h"

/**
 * factorial - factorial
 * @n: numberr
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (!(n < 0))
	{
		if (n <= 1)
		{
			return (1);
		}
		else
		{
			n = n * factorial(n - 1);
		}
	}
	else
	{
		return (-1);
	}
	return (n);
}
