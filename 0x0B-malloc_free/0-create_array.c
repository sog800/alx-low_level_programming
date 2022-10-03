#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of the array
 * @c: character tobe printed
 *
 * Return: a pointer of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		buffer = ((char *) malloc(sizeof(char) * size));
		if (buffer == NULL)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x < size; x++)
			{
				buffer[x] = c;
			}
			return (buffer);
		}
	}
}

