#include "main.h"

/**
 * _memset - memset
 * @s: pointer
 * @b: value tobe set
 * @n: number of bytes
 *
 * Return: returns a pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; *s != '\0'; x++)
	{
		if (x <= n)
		{
			while (x <= n)
			{
				s[x] = b;
				x++;
			}
		}
		else
		{
			s[x] = s[x];
		}
	}
	return (s);
}
