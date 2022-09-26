#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strchr -strchr
 * @s: string
 * @c: character to be loated
 *
 * Return: a pointer to c
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
