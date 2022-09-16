#include "main.h"

/**
 * print_diagonal - printing diagonal
 * @n: parameter
 */
void print_diagonal(int n)
{
	int x;
	int y;
	int sp;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			_putchar(92);
			_putchar('\n');
			sp++;
			for (x = 0; x < sp; x++)
			{
				_putchar(' ');
			}
		}
}	}	
