#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - combine strings
 * @s1: first string
 * @s2: second string
 * @n: number of bites ti add
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *rtn_p;
	unsigned int x;

	if (s1 == NULL && s2 != NULL)
	{
		s1[0] = 0;
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s2[0] = 0;
	}
	else if (s1 == NULL && s2 == NULL)
	{
		s1[0] = 0;
		s2[0] = 0;
	}
	strncat(s1, s2, n);
	rtn_p = (char *)malloc(sizeof(s1));
	if (rtn_p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= strlen(s1); x++)
	{
		rtn_p[x] = s1[x];
	}
	return (rtn_p);
}
