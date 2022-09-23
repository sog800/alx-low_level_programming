#include "main.h"

/**
 * print_number - printing numbers
 * @n: numbers
 */

void print_number(int n)
{
	int rev = 0;
	int rev2 = 0;

	if (n != 0)
	{
		if (!(n < 0))
		{
			while (n)
			{
				_putchar(n % 10 + '0');
				n = n / 10;
			}
			while (n > 0)
			{
				rev = (rev * 10) + (n % 10);
				n = n / 10;
			}
			while (rev > 0)
			{
				rev2 = (rev * 10) + (rev % 10);
				rev = rev / 10;
				_putchar(rev2);
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
