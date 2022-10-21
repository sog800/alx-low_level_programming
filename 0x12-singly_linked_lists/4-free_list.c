#include "lists.h"

/**
 * free_list - free
 * @head: head
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head);
	}
	else
	{
		exit(1);
	}
}
