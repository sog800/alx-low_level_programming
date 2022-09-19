#include "main.h"
#include <string.h>
#include<unistd.h>

/**
 * _puts - printing to output
 * @str: sring to be out puted
 *
 * Description: printing a string
 * to the standard output
 */

void _puts(char *str)
{
	int num;

	num = strlen(str);
	write(1, str, num);
	_putchar('\n');
}
