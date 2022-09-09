#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char y = 'a';
	char x = 'A';

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);

}
