#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * print_rev - printing in reversed
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int x, len;
	char end, begin;
	char *begin_ptr, *end_ptr, ch;

	begin_ptr = &begin;
	end_ptr = &end;
	len = strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (x = 0; x < len/2; x++)
	{
		end_ptr++;
	}
	for (x = 0; x < len/2; x++)
	{
		ch = end;
		end = begin;
		begin = ch;
		begin_ptr++;
		end_ptr--;
		_putchar(begin);
	}
	_putchar('\n');
}
