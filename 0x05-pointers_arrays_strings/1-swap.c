#include "main.h"

/**
 * swap_int - swaping
 * @a: pointer parameter to swap
 * @b: pointer parameter to swap
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
