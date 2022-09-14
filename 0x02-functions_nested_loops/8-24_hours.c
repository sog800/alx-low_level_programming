#include "main.h"

/**
 * jack_bauer - printing time
 */
void jack_bauer(void)
{
	int z = 0;
	int b = 0;
	int m = 0;
	int n = 0;
	int y = 0;
	int x = 0;

	for (x = 0; x <= 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar(z + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar(n + '0');
			n++;
			if (n == 10)
			{
				n = 0;
				m++;
			}
			if (m == 10)
			{
				m = 0;
			}
			_putchar('\n');
		}
		if (m == 5 && n == 9)
			break;
		b++;
		if (b == 10)
		{
			b = 0;
			z++;
		}
		if (x == 23)
			break;
	}
}
