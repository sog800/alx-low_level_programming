#include "main.h"

/**
 * print_alphabet_x10 - printing alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char y = 'a';

	for (x = 0; x < 10; x++)
	{
		y = 'a';
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
