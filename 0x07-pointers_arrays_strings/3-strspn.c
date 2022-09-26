#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - strspn
 * @s: string to be scarnned
 * @accept: string to comparere
 *
 * Return: an int
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t ilen = 0;
	size_t len1, len2;
	size_t i, j;
	bool found;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		found = false;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		else
		{
			ilen++;
		}
	}
	return (ilen);
}
