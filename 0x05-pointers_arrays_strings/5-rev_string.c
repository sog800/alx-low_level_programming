#include "main.h"
#include <string.h>

/**
 * rev_string - printing reverse
 * @s: parameter
 */

void rev_string(char *s)
{
	int len, x;
	char *begin_ptr, *end_ptr, ch;

	len = strlen(s);
	begin_ptr = s;
	end_ptr = s;
	for (x = 0; x < len - 1; x++)
		end_ptr++;
	for (x = 0; x < len / 2; x++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
	
}
