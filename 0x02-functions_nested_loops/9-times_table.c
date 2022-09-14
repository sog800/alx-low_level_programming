#include "main.h"
/**
 * times_table - printing time table up to 9
 */
void times_table(void)
{
	int m, n, p, q, r, a, b, c, d, e, x;

	for (x = 0; x <= 10; x++)
	{
		m = x * 0;
		_putchar(m + '0');
		_putchar(',');
		_putchar(' ');
		n = x * 1;
	       _putchar(n + '0');
	       _putchar(',');
	       _putchar(' ');
	       p = x * 2;
	       _putchar(p + '0');
	       _putchar(',');
	       _putchar(' ');
	       q = x * 3;
	       _putchar(q + '0');
	       _putchar(',');
	       _putchar(' ');
	       r = x * 4;
	       _putchar(r + '0');
	       _putchar(',');
	       _putchar(' ');
	       a = x * 5;
	       _putchar(a + '0');
	       _putchar(',');
	       _putchar(' ');
	       b = x * 6;
	       _putchar(b + '0');
	       _putchar(',');
	       _putchar(' ');
	       c = x * 7;
	       _putchar(c + '0');
	       _putchar(',');
	       _putchar(' ');
	       d = x * 8;
	       _putchar(d + '0');
	       _putchar(',');
	       _putchar(' ');
	       e = x * 9;
	       _putchar(e + '0');
	       _putchar(',');
	       _putchar(' ');
	}
	_putchar('\n');
}
