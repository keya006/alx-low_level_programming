#include "lists.h"

/**
 * freed_listp -it frees a linked list
 * @head: the head of a linked list.
 *
 * Return: void
 */
void freed_listp(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (!head)
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
 * print_listint_safe - it prints a linked list
 * @head: the head of a linked list
 *
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nods = 0;
	listp_t *hp, *n, *d;

	hp = NULL;
	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = hp;
		hp = n;

		d = hp;

		while (d->next != NULL)
		{
			d = d->next;
			if (head == d->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freed_listp(&hp);
				return (nods);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nods++;
	}

	freed_listp(&hp);
	return (nods);
}
