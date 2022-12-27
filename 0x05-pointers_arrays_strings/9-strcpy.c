#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - strcpy function
 * @dest: destination to copy the string
 * @src: the string to be copied
 *
 * Return: return dest for succsess
 */
char *_strcpy(char *dest, char *src)
{
	size_t x;
	size_t srclen;

	srclen = (strlen(src) + 1);
	if (dest == NULL || src == NULL)
	{
		return (0);
	}
	for (x = 0; x < srclen; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
