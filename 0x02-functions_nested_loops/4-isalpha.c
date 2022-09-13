#include <ctype.h>
#include "main.h"

/**
 * int _isalpha - check for alphabet ccharacter
 * @c: check if c is alpha
 *
 * Description: a function cheking for alpha
 *
 * Return: 1  if c is a letter, lowercase or uppercase otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c) && (islower(c) || isupper(c)))
		return (1);
	else
		return (0);
	_putchar('\n');
}
