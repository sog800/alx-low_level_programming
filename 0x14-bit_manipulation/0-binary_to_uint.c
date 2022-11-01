#include "main.h"
#include <ctype.h>
/**
 * binary_to_uint - binary to int
 * @b: string of binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int total;
	unsigned int decval;

	len = strlen(b);
	total = 0;
	decval = 1;
	if (b == NULL)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			total = 0;
			return (total);
			exit(0);
		}
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}
	return (total);
}
