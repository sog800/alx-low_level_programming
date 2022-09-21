#include "main.h"
#include <string.h>

/**
 * _strcmp - strcmp
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2;
	int rtn_val;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		rtn_val = s1[len1 - 1] - s2[len2 - 1];
		return (rtn_val);
	}
}
