#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at idx given
 * @head: the head of a list
 * @index: the index of the list where the node is deleted
 *
 * Return: 1 on success, -1 on faillure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p;
	listint_t *x;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p != NULL; i++)
		{
			p = p->x;
		}
	}

	if (p == NULL || (p->x == NULL && index != 0))
	{
		return (-1);
	}

	x = p->x;

	if (index != 0)
	{
		p->x = x->x
		free(x);
	}
	else
	{
		free(p);
		*head = x;
	}

	return (1);
}
