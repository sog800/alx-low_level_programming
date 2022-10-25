#include "lists.h"
/**
 * free_listint
 * @head: head
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		exit(1);
	free(head);
}
