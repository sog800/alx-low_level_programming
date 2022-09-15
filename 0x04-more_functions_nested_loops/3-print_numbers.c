#include "main.h"
#include <stdlib.h>

/**
 * print_numbers - printing numbers
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x / 10)
			print(x /10);
			putchar(x % 10 + '0');
			print(x)
	}
}
