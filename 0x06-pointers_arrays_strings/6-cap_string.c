#include "main.h"
/**
 * cap_string - capitalizing the first char
 * @s: string to be capitalized
 *
 * Return: Always a pointer
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;
			continue;
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == ',' || s[i] == '?')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '\t' || s[i] == ',' || s[i] == ';' || s[i] == '{' || s[i] == '}')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == '(' || s[i] == ')' || s[i] == '"' || s[i] == '?')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
