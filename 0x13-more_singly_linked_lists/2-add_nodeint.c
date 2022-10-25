#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adding a node at the begining
 * @head: a pointer of head
 * @n: value of our data
 *
 * Return: apointer of the node tobeadded
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (0);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (0);
		(ptr)->n = n;
		(ptr)->next = NULL;
		(ptr)->next = (*head);
		(*head) = (ptr);
	}
	return (*head);
}
