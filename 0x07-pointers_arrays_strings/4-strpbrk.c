#include "main.h"
/**
 * _strpbrk - search the string
 * @s: string to be searched
 * @accept: substring of bites to  serch for
 *
 * Return: return a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, check, position;

	i = j = check = position = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 1;
				position = i;
				break;
			}
		}
		if (check == 1)
		{
			break;
		}
		i++;
	}
	if (position == 0)
	{
		return ('\0');
	}
	else
	{
		return (s + position);
	}
}
