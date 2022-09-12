#include <stdio.h>

/**
 * main - printing hexademal numbers
 *
 * Retain: Always 0 (Success)
 */
int main(void)
{
	char y = 'a';
	int x;

	while (x < 16)
	{
		x = 0;
		putchar(x);
		x++;
		if (x == 9)
		{
			for (y = 'a'; y <= 'f'; y++)
			{
				putchar(y);
				if (y == 'f')
					x = 16;
			}
		}
		
	}
	putchar('\n');
	return (0);
}
