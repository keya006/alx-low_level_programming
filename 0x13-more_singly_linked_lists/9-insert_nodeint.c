#include "lists.h"

/**
 * insert_nodeint_at_index - a funx thatinserts a new node
 * at a given position
 * @head: the head of a list
 * @idx: index of the list where the new node added
 * @n: integer element n
 *
 * Return: address of new node, NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *k;
	listint_t *t;

	t = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
	}

	if (t == NULL && idx != 0)
		return (NULL);

	k = malloc(sizeof(listint_t));
	if (k == NULL)
		return (NULL);

	k->n = n;

	if (idx == 0)
	{
		k->next = *head;
		*head = k;
	}
	else
	{
		k->next = t->next;
		t->next = k;
	}

	return (k);
}
