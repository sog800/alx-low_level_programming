#include "main.h"
#include <ctype.h>

/**
 * _islower - checking for lowercase
 * @c: if c is lowercase
 *
 * Return: 1 if the character is lower. 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
	_putchar('\n');
}


