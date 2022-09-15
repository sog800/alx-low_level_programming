#include "main.h"

/**
 * more_numbers - printing numbers
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 14; x++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
