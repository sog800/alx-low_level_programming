#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - strstr
 * @haystack: string 1
 * @needle: string 2
 *
 * Return: a pointer for success other wise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	size_t  needle_len;

	needle_len = strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (!strncmp(haystack, needle, needle_len))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
