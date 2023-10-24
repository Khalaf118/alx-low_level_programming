#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: a pointer to a pointer to a list_t head node
 * @str: the string to be duplicated in the new node
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	/*if (head == NULL)
		return (NULL);*/
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	head = &temp;
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	return (*head);
}
