#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * @x: the aphabet to print
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return;
}
