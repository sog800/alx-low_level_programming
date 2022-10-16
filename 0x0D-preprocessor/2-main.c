#include <unistd.h>
#include <string.h>
#include "putchar.h"
/**
 * main - printing file name
 *
 * Return: Always Return 0
 */
int main(void)
{
	char *keep;

	keep = __FILE__;
	write(1, keep, strlen(keep));
	_putchar('\n');
	return (0);
}
