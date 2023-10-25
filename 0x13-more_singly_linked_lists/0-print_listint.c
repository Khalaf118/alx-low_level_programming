#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to listint_t head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t d = 0;

	if (temp == NULL)
		return (0);
	do {
		printf("%d\n", temp->n);
		d++;
		temp = temp->next;
	} while (temp != NULL);
	return (d);
}
