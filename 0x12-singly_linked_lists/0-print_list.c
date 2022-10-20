#include <stdio.h>
#include "lists.h"
/**
 * print_list - printing list
 * @h: head pointer
 *
 * Return: an iteger
 */
size_t print_list(const list_t *h)
{
	size_t nod;
	const list_t *ptr;

	ptr = NULL;
	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	ptr = h;
	nod = 0;
	while (ptr != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		ptr = ptr->next;
		nod++;
	}
	return (nod);
}
