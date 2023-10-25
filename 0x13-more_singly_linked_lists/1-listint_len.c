#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements
 * in a linked listint_t list.
 * @h: a pointer to listint_t head node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t d = 0;

	if (temp == NULL)
		return (0);
	do {
		d++;
		temp = temp->next;
	} while (temp != NULL);
	return (d);
}
