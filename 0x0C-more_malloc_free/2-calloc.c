#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - calloc
 * @nmemb: length of the array
 * @size: element type
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		p = (void *)malloc(nmemb * size);
		if (p != NULL)
		{
			memset(p, 0, nmemb * size);
			return (p);
		}
		else
		{
			return (NULL);
		}
	}
}
