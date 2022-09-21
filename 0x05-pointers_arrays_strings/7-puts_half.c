#include "main.h"
#include <string.h>

/**
 * puts_half - half a string
 * @str: paremeter
 */
void puts_half(char *str)
{
	int x;
	int m = 0;
	char *y;
	int len;

	len = strlen(str);
	for (x = 0; x <= len - 1; x++)
	{
		y = str++;
		m++;
		if (m > (len - 1) / 2)
		{
			_putchar(*y);
		}
	}
}
