#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - printing in reversed
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len, x;

	if (s == NULL)
		exit(1);
	len = strlen(s);

	for (x = len; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
