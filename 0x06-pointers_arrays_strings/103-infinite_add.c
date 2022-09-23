#include "main.h"
#include <stdlib.h>
/**
 * infinite_add - add numbers
 * @n1: sting
 * @n2: string
 * @r: bufer of the sum
 * @size_r: size of buffer
 *
 * Return: a pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x, store, y, m, i;
	int n, len, z;
	char arr[100];

	i = 0;
	for (m = 0; m <= size_r; m++)
	{
		n1[m] = n1[m];
		n2[m] = n2[m];
	}
	x = atoi(n1);
	y = atoi(n2);
	store = x + y;
	while (store != 0)
	{
		n = store % 10;
		arr[i] = n;
		i++;
		store = store / 10;
	}
	len = sizeof(arr) / sizeof(char);
	if (len <= size_r)
	{
		for (z = 0; z < size_r; z++)
		{
			r[z] = arr[z];
		}
		return (r);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
