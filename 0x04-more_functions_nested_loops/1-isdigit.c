#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check for digit
 * @c: if c is digit
 * Retain: 1 for success 0therwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
