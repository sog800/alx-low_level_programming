#include "main.h"
#include <string.h>

/**
 * print_rev - printing in reversed
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int len, x;

	x = 0;
	len = strlen(s);
	while (x < len)
	{
		s++;
		x++;
	}
}
