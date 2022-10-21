#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the begining
 * @head: head
 * @str: str
 *
 * Return: a linker
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head != NULL)
		return (NULL);
	ptr = (list_t *)malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	return (ptr);
}
