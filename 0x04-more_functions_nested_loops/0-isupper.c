#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for upperase
 * @c: peremete to be checked
 * Return: 0 Success
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
