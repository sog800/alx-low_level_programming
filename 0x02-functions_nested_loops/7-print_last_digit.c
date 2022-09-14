#include "main.h"

/**
 * print_last_digit - printing last digit
 * @n: last digit of n
 *
 * Discription: printing the last digit of n
 * Return: Always an int last digit
 */
int print_last_digit(int n)
{
	int lastDigit = 0;

	lastDigit = n % 10;

	return (lastDigit);
}
