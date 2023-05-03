#include "lists.h"
#include <stdio.h>

/**
 * loop_listint_len - a function thatCounts the number of unique nodes
 * in a looped listint_t
 * @head: A pointer to the head of the listint_t
 *
 * Return: 0 if list is not looped otherwise numb of nodes
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *toto, *hate;
	size_t nods = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	toto = head->next;
	hate = (head->next)->next;

	while (hate)
	{
		if (toto == hate)
		{
			toto = head;
			while (toto != hate)
			{
				nods++;
				toto = toto->next;
				hate = hate->next;
			}

			toto = toto->next;
			while (toto != hate)
			{
				nods++;
				toto = toto->next;
			}

			return (nods);
		}

		toto = toto->next;
		hate = (hate->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - it prints a linked list
 * @head: the head of a linked list
 *
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nods, idx = 0;

	nods = loop_listint_len(head);

	if (nods == 0)
	{
		for (; head != NULL; nods++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nods; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nods);
}
