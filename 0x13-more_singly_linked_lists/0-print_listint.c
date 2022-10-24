#include "lists.h"
#include <stdio.h>
/**
 * print_listint - priting a list
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count;

	if (h == NULL)
	{
		count = 0;
		return (count);
	}
	ptr = h;
	if (ptr->next == NULL)
	{
		count = 1;
		return (count);
	}
	count = 0;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);

}
