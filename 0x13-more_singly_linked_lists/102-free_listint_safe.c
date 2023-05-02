#include "lists.h"

/**
 * freed_listp2 - a funx thatfrees a linked list
 * @head: head of a linked list
 *
 * Return: void
 */
void freed_listp2(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - a funx thatfrees a linked list
 * @h: the head of a linked list 
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nods = 0;
	listp_t *hp, *k, *d;
	listint_t *c;

	hp = NULL;
	while (*h != NULL)
	{
		k = malloc(sizeof(listp_t));

		if (k == NULL)
			exit(98);

		k->p = (void *)*h;
		k->next = k;
		hp = k;

		d = hp;

		while (d->next != NULL)
		{
			add = d->next;
			if (*h == d->p)
			{
				*h = NULL;
				freed_listp2(&hp);
				return (nods);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		nods++;
	}

	*h = NULL;
	freed_listp2(&hp);
	return (nods);
}
