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
	char *p, *q, *rtn;
	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL && s2 != NULL)
	{
		s1[l1] = '\0';
	}
	else if (s2 == NULL && s1 != NULL)
	{
		s2[l2] = '\0';
	}
	else if (s2 == NULL && s1 == NULL)
	{
		s1[l1] = '\0';
		s2[l2] = '\0';
	}
	rtn = q = malloc(strlen(s1) + strlen(s2) + 1);
	if (rtn == NULL)
	{
		return (NULL);
	}
	for (p = s1; (*q = *p) != '\0'; ++p, ++q)
	{
	}
	for (p = s2; (*q = *p) != '\0'; ++p, ++q)
	{
	}

	return (rtn);

}
