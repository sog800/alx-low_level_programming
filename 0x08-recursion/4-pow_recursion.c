#include "main.h"

/**
 * _pow_recursion - pow
 * @x: integer
 * @y: integer
 *
 * Return: int or if y is < 0 return 1
 */
int _pow_recursion(int x, int y)
{
	if (!(y < 0))
	{
		if (y != 0)
		{
			return (x * _pow_recursion(x, y - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
