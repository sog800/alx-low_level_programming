#include "main.h"

/**
 * set_strin -  sets the value of a pointer to a char.
 * @s: pointer pointing to pointer
 * @to: pointer with the string
 */
void set_string(char **s, char *to)
{
	s = &to;
}
