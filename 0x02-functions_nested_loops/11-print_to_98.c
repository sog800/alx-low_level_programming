#include <stdio.h>

/**
 *  print_to_98 - printing to 95
 *  @n: paremeter of the function
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = 98; x <= n; x++)
		
			printf("%d, ", x);
		
	}
	else if (n < 98)
	{
		for (x = 98; x >= n; x--)
			printf("%d, ", x);
		
	}
	else
		printf("%d, ", n);
	printf("\n");
}
