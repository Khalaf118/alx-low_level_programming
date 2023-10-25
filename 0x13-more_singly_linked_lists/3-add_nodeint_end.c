#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: a pointer to a pointer to a list_t head node
 * @n: the int data
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;

	new->n = n;

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
