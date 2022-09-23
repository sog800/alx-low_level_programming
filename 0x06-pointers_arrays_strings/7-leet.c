#include "main.h"

/**
 * leet - encoder
 * @s: string to be encoded
 *
 * Return: a pointer
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = 4;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}

