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

	printf("Size of a char:%zu byte(s)\n", sizeof(charType));
	printf("Size of an int:%zu byte(s)\n", sizeof(intType));
	printf("Size of a long int:%zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int:%zu byte(s)", sizeof(longlongintType));
	printf("Size of a float:%zu", sizeof(floatType));

	return (0);
}
