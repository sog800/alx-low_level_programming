#include "main.h"

/**
 * print_most_numbers - print numbers exept 2 nad 4
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		_putchar(x + '0');
	}
	_putchar('\n');
}
