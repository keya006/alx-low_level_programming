#include "lists.h"

/**
 * reverse_listint - inverts a linked list.
 * @head: the head of a linked list
 *
 * Return: the pointer to the 1st node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *r;
	listint_t *s;

	r = NULL;
	s = NULL;

	while (!head)
	{
		s = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = s;
	}

	*head = r;
	return (*head);
}
