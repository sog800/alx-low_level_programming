#include "main.h"
int hcf(int n, int z);
/**
 * _sqrt_recursion - squreroot
 * @n: number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int z = 0;

	hcf(n, z);
	if (n % z != 0)
	{
		return (-1);
	}
	else
	{
		return (z);
	}

}
/**
 * hcf - number
 * @z: number
 * @n: comparator
 *
 * Return: z
 */
int hcf(int n, int z)
{
	int m;

	if (z * z == n)
	{
		return (0);
	}
	else
	{
		hcf(n, z + 1);
		m = z;
	}
	return (m);
}
