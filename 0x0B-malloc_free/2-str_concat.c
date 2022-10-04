#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * str_concat - combine strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int str_len, x;
	char *rtn_ptr;

	strcat(s1, s2);
	str_len = strlen(s1);
	rtn_ptr = (char *)malloc(sizeof(char) * str_len);
	if (rtn_ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < str_len; x++)
	{
		rtn_ptr[x] = s1[x];
	}
	return (rtn_ptr);
}
