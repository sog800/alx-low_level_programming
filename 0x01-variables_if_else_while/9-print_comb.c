#include <stdio.h>

/**
 * main - printing combinatins
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 58)
		{
			putchar(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
