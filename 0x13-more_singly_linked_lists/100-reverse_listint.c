#include "lists.h"

/**
 * reverse_listint - inverts a linked list.
 * @head: the head of a linked list
 *
 * Return: the pointer to the 1st node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pev;
		pev = *head;
		*head = next;
	}

	*head = pev;

	return (*head);
}
