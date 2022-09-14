#include "main.h"

/**
 * jack_bauer - printing time
 */
void jack_bauer(void)
{
	int x = 0;
	int y = 0;
	int n = 0;
	int w = 0;
	int t = 0;

	while (t < 60)
	{
		x = 0;
		y = 0;
		n = 0;
		w = 0;
		for (x = 0; x < 11; x++)
		{
			if (x == 10)
			{
				y++;
				_putchar('0' + y);
			}
			else
			{
				_putchar(y + '0');
			}
			if (y == 10)
			{
				n++;
				_putchar('0' + n);
				_putchar(':');
			}
			else
			{
				_putchar('0' + n);
				_putchar(':');
			}
			if (n == 10)
			{
				w++;
				_putchar(w + '0');
			}
			else
			{
				_putchar(w + '0');
			}
			_putchar(x + '0');
			_putchar('\n');
			t++;
		}
	}
	_putchar('\n');
}
