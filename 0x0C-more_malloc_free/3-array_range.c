#include "main.h"
#include <stdlib.h>

/**
 * array_range - range of an array
 * @min: begining of the array
 * @max: ending the array
 *
 * Return: an int pointer
 */
int *array_range(int min, int max)
{
	int x;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		p = (int *)malloc(sizeof(int) * max + 1);
		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (x = 0; x <= max; x++)
			{
				p[x] = min;
				min++;
			}
			return (p);
		}
	}
}
