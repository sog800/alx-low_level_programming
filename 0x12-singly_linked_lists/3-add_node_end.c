#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: head
 * @str: str
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = (*head);
	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (0);
	}
	temp->str = strdup(str);
	temp->next = NULL;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
