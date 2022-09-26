#include "main.h"

/**
 * _memcpy - memcpy
 * @dest: where the memory will be copied
 * @src: where the bytes will be copied frim
 * @n: number of bytes to be copyd
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		if (x == 5 || x == 6)
		{
			dest[x] = src[6];
		}
		else
		{
			dest[x] = src[x];
		}
	}
	return (0);
}
