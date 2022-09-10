#include <stdio.h>

/**
 * main - prints aphabet exept q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e')
			x = 'f';
		if (x == 'q')
			x = 'r';
		putchar(x);
	}
	putchar('\n');
	return (0);

}
