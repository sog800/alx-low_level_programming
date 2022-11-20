#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: argument
 * @argv: argument
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int product;
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);
	}
	return (0);
}
