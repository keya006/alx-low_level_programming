#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: the pointer to the first element in the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success and -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *k = NULL;
	unsigned int s = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}

	while (s < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		s++;
	}


	k = t->next;
	t->next = k->next;
	free(k);

	return (1);
}

