#include <stdio.h>

/**
 * main - prime factor
 *
 * Return: Always 0 success
 */
int main(void)
{
	long int n = 612852475143;
	long int div = 2;
	long int maxfact;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxfact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld", maxfact);
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
