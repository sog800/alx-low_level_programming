#include "main.h"

/**
 * rot13 - converting a string
 * @s: string
 *
 * Return: apointer
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 13;
		}
	}
	return (s);
}
