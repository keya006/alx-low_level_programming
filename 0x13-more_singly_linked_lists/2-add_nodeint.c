#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning of list
 * @head: head of a list.
 * @n: n element of list
 *
 * Return: new elem address, Null on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));

	if (k == NULL)
		return (NULL);

	k->n = n;
	k->next = *head;
	*head = k;

	return (*head);
}
