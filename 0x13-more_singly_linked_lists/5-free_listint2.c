#include "lists.h"
/**
 * free_listint2 - free
 * @head: head
 */
void free_listint2(listint_t **head)
{
	free(*head);
}
