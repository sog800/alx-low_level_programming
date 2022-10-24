#include "lists.h"
/**
 * listint_len - length of the list
 * @h: head pointer
 *
 * Return: return the length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	ptr = NULL;
	if (h == NULL)
	{
		count = 0;
		return (count);
	}
	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
