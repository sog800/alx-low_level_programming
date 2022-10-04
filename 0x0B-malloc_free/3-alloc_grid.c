#include "main.h"

/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		p2 = (int **)malloc(sizeof(int *) * (width));
		for(i = 0; i < width; i++)
		{
			p2[i] = (int*) malloc(height * sizeof(int));
		}
		return (p2);
	}
}
