#include "main.h"
#include <string.h>
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
	int x = 0;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (!(s2[0] == '*' && s2[l2 - 1] == s1[l1 - 1]))
	{
		if (s2[x] == '*')
		{
			x++;
		}
		if (s1[x] == s2[x] && s1[l1 - 1] == s2[l2 - 1])
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
