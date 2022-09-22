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
	int rtn_val;

	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		rtn_val = s1 - s2;
		return (rtn_val);
	}
}
