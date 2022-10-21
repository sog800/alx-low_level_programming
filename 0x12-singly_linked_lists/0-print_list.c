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

	if (h == NULL)
	{
		nod = 0;
		return (nod);
	}
	ptr = NULL;
	ptr = h;
	nod = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u]", ptr->len);
			printf("%s\n",ptr->str);
		}
		ptr = ptr->next;
		nod++;
	}
	return (nod);
}
