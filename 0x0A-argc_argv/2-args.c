#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing argv
 * @argv: argument
 * @argc: argumentr
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
