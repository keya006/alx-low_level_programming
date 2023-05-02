#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n)
 * @head: the head of a list
 *
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	int hednod;
	listint_t *t;
	listint_t *k;

	if (*head == NULL)
		return (0);

	k = *head;

	hednod = k->n;

	t = k->next;

	free(k);

	*head = t;

	return (hednod);
}
