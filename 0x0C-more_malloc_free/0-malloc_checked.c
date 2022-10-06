#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc
 * @b: amount of memory
 *
 * Return: a pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (void *)malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
