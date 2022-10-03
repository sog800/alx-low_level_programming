#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - copy string
 * @str: string
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int str_size;
	char *dup;
	char *dup_offset;

	str_size = strlen(str);
	dup = (char *)malloc(sizeof(char) * str_size);
	if (dup == NULL)
	{
		return ((char *)NULL);
	}
	dup_offset = dup;
	while (*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';
	return (dup);
}
