#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changing to upper case
 * @str: to be  changed
 *
 * Return: Always a pointer
 */
char *string_toupper(char *str)
{
	int x;
	int len;

	len = strlen(str);
	for (x = 0; x < len; x++)
	{
		if (!(isupper(str[x])))
		{
			str[x] = toupper(str[x]);
		}
		else
		{
			str[x] = str[x];
		}
		_putchar('\n');
	}
	return (str);
}
