#include <stdio.h>

/**
 * main - printing combinatins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	for (x = 0; x <= 10; x++)
	{
		putchar(x);
		putchar(',');
		if (x == 9)
			break;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
