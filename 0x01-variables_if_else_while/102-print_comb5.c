#include <stdio.h>

/**
 * main - printing numbers between 
 * 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g, h, p1, p2;

	i = e = g = h = 48;
	
	while (h < 58)
	{ 
		g = 48;
		while (g < 58)
		{
			e = 48;
				while (e <  58)
				{
					i = 48;
					while (i < 58)
					{
						p1 = (h * 10) + g;
						p2 = (e * 10) + i;
						if (p1 < p2)
						{
							putchar(h);
							putchar(g);
							putchar(' ');
							putchar(e);
							putchar(i);
							if (h == 57 && g == 56 && e == 57 && i == 57)
								break;
							putchar(',');
							putchar(' ');
						}
						i++;
					}
					e++;
				}
				g++;
		}h++;
	}
	putchar('\n');
	return (0);
}
