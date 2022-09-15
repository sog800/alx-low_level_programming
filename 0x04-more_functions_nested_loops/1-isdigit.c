#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for digit
 * @c: if c is digit
 *
 * Return: Always retun 1 success 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
