#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * _puts_recursion - puts in recursion
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (!(*s == '\0'))
	{
		write(1, s, 1);
		s++;
		x++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
