#include "main.h"

/**
 * print_sign - printing sign
 * @n: printing sign of n
 *
 * Description: it prints the sign of n
 * Return: 1 for positive 0 for 0 and -1 for negaative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
	return (n);
}
