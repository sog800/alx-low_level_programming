#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - iterator
 * @array: array
 * @size: size of the array
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
	{
		exit(1);
	}
	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
