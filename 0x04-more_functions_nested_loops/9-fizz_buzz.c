#include <stdio.h>

/**
 * main - printing fizzbuzz
 *
 * Return: Always 0 success
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x != 0)
		{
			if (x % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (x % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (x % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", x);
			}
		}
	}
	putchar('\n');
	return (0);
}
