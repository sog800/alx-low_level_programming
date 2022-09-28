#include "main.h"
#include <string.h>
char *string2(char *s);
/**
 * wildcmp - comparing strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return 1 for success otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (!(s2[0] == '*' && s2[l2 - 1] == s1[l1 - 1]))
	{
		string2(s2);
		if (s1[0] == s2[0] && s1[l1 - 1] == s2[l2 - 1])
		{
			return (1);
		}
		else if (l2 == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (l2 == 4 && s2[0] == '*' && s2[1] == '.' && s2[2] == s1[l1 - 1])
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
/**
 * string2 - removing char * in s2
 * @s: string
 *
 * Return: s
 */
char *string2(char *s)
{
	int x;
	int l2;

	l2 = strlen(s);
	for (x = 0; x < l2; x++)
	{
		if (s[x] == '*')
		{
			memmove(&s[x], &s[x + 1], strlen(s) - x);
		}
		else
		{
			s[x] = s[x];
		}
	}
	return (s);
}
