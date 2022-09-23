#include "main.h"

/**
 * print_number - printing numbers
 * @n: numbers
 */

void print_number(int n)
{
	int rev = 0;

	if (n != 0)
	{
		if (!(n < 0))
		{
			while (n)
			{
				n = n % 10;
				n = n / 10;
			}
			while (n > 0)
			{
				rev = (rev * 10) + (n % 10);
				n = n / 10;
				_putchar(rev + '0');
			}
		}
		else
		{
			_putchar('-');
			n = -n;
		}
	}
	else
	{
		_putchar('0');
	}
	_putchar('\n');
}
