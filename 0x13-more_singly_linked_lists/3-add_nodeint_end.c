#include "lists.h"

/**
 * add_nodeint_end - adding at the end of the list
 * @head: head pointer
 * @n: integer data of the list
 *
 * Return: apointer heat of the head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		(*head) = ptr;
		return (*head);
	}
	(*head) = ptr;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (*head);

}
