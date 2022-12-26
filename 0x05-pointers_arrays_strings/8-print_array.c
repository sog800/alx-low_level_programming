#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - print array
 * @a: an array
 * @n: elements of the array
 */
void print_array(int *a, int n)
{
	int x;

	if (a == NULL)
	{
		exit(1);
	}
	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x == (n - 1))
		{
			continue;
		}
		else
		{
			printf(", ");
		}
	}
	printf("\n");
}
