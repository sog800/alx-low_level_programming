#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: an array to be reversed
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = temp;
	}
	for (x = 0; x < n; n++)
	{
		print(&x);
		_putchar(a[x]);
	}
	_putchar('\n');
}
/**
 * print - printing int
 * @n: ant int to be printed
 */

void print(int *n)
{
	if (*n / 10)
	{
		_putchar((*n / 10) + '0');
	}
	else
	{
		_putchar((*n % 10) + '0');
	}
}
