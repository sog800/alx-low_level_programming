#include "main.h"
#include <string.h>
/**
 * puts2 - printing number 2
 * @str: string to be printed
 */

void puts2(char *str)
{
	int x;
	char *y;
	int len;

	len = strlen(str);
	for (x = 0; x < len / 2; x++)
	{
		if (x == 0)
		{
			y = str;
			_putchar(*y);
		}
		else
		{
			y = str += 2;
			_putchar(*y);
		}
	}
	_putchar('\n');
}
