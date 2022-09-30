#include "main.h"

/**
 * is_prime_number - prime number
 * @n: number
 *
 * Return: 1 if is prime other wise 0
 */
int is_prime_number(int n)
{
	if (n != 0)
	{
		if (n > 1 && n % 1 == 0 && n % (n - 1) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		is_prime_number(n - 1);
	}
	return (0);
}
