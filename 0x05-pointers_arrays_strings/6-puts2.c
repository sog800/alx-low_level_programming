#include "main.h"
#include <string.h>
/**
 * puts2 - printing number 2
 * @str: string to be printed
 */

void puts2(char *str)
{
	int x;
	char y;
	int l;
	char p,

	l = strlen(str);
	for (x = 0; x < len; x++)
	{
		p = *(str + x + x);
		y = *p;
		_putchar(y);
	}
	_putchar('\n');
}
