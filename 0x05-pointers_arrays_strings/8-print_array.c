#include "main.h"
#include <stdio.h>

/**
 * print_array - print array
 * @*a: an array
 * @n: elements of the array
 */
void print_array(int *a, int n)
{
	int len;
	int *aptr;
	len = 2;
	n = 0;
	while (n <= len)
	{
		printf("%d, ", *a);
		a++;
		n++;
	}
}
