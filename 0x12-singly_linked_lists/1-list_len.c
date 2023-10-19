#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: a pointer to list_t head node
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;

	if (temp == NULL)
		return (0);
	do {
		n++;
		temp = temp->next;
	} while (temp != NULL);
	return (n);
}
