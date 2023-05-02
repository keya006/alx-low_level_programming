#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the head of the
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}

	return (number);
}

