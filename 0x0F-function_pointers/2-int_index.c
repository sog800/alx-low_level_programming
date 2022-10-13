#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - index
 * @array: array
 * @size: number of elements
 * @cmp: function pointer
 *
 * Return: Always return an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, rtn;

	if (array == NULL || cmp == NULL)
	{
		exit(0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		x = 0;
		while (x < size)
		{
			rtn = cmp(array[x]);
			if (rtn != 0)
			{
				return (x);
			}
			x++;
			if (x == size)
				return (-1);
		}
	}
	return (0);
}
