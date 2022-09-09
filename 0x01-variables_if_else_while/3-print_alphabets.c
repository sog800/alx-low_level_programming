#include <stdio.h>                                                   
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char c = 'A';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

		
}	
