#include "main.h"
#include <stddef.h>

/**
 * _strchr - strchr
 * @s: string
 * @c: character
 *
 * Return: a pointe
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
