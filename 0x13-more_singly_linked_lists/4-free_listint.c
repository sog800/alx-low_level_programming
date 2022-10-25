#include "lists.h"
/**
 * free_listint
 * @head: head
 */
void free_listint(listint_t *head)
{
	free(head);
}
