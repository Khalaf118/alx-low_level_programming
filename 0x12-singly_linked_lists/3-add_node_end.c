#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: a pointer to a pointer to a list_t head node
 * @str: the string to be duplicated in the new node
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	if (*head == NULL)
		*head = new;
	else
	{
		while ((*head)->next != NULL)
			*head = (*head)->next;
		(*head)->next = new;
		*head = temp;
	}

	return (new);
}
