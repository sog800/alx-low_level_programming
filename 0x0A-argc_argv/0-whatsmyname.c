#include <stdio.h>

/**
 * main - printing first argument
 * @argv: arguments
 * @argc: argument
 *
 * Return: Always return 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
