#include "lists.h"

/**
 * list_len - length of the list
 * @h: head
 *
 * Return: lenth of the string
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *ptr;

	if (h == NULL)
		exit(1);
	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

