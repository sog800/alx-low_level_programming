#include <stdio.h>

/**
 * main - printing number of aguments
 * @argc: argument
 * @argv: argument
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int cou;
	int x;
	(void)*argv;

	for (x = 0; x < argc; x++)
	{
		cou = x;
	}
	printf("%d\n", cou);
	return (0);
}
