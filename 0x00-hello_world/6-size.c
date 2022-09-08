#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	char charType;
	long long longlongintType;
	long int longintType;

	puts("Size of a char:%zu byte(s)", sizeof(charType));
	puts("Size of an int:%zu byte(s)", sizeof(intType));
	puts("Size of a long int:%zu byte(s)", sizeof(longintType));
	puts("Size of a long long int: %zu byte(s)", sizeof(longlongintType));
	puts("Size of a float: %zu byte(s)", sizeof(floatType));

	return (0);
}
