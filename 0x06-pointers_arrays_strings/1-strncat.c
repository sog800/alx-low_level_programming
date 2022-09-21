#include "main.h"
#include <string.h>
/**
 * _strncat - strncat
 * @dest: first string
 * @src: second string
 * @n: intiger
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];
	dest[dest_len + i] = src[i];

	return (dest);
}
