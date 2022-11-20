#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - multiplying numbers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: Always 0 for success
 */
int main(int argc, char **argv)
{
	int num1, num2, product;

	if (argc < 3)
	{
		printf("Error");
		exit(1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
