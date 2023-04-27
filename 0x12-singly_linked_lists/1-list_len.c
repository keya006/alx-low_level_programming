#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t k;

	k = 0;
	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
