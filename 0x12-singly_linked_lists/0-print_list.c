#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to list_t head node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;

	if (temp == NULL)
		return (0);
	do {
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		n++;
		temp = temp->next;
	} while (temp != NULL);
	return (n);
}
