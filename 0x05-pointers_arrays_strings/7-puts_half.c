#include "main.h"
#include <string.h>

/**
 * puts_half - half a string
 * @str: paremeter
 */
void puts_half(char *str)
{
	int x;
	char *y;
	int len;
	
	len = strlen(str);
	for (x = 0; x < len / 2; x++)
	{
		*y = str++;
		if (x == (len / 2) / 2)
		{
		
		}
	}
	_putchar('\n');
}
