#include "lists.h"

/**
 * find_listint_loop - a funx thatfinds the loop in a linked list.
 * @head: the head of a linked list
 *
 * Return: address of node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptwo;
	listint_t *pev;

	ptwo = head;
	pev = head;
	while (head && ptwo && ptwo->next)
	{
		head = head->next;
		ptwo = ptwo->next->next;

		if (head == ptwo)
		{
			head = pev;
			pev =  ptwo;
			while (1)
			{
				ptwo = pev;
				while (ptwo->next != head && ptwo->next != pev)
				{
					ptwo = ptwo->next;
				}
				if (ptwo->next == head)
					break;

				head = head->next;
			}
			return (ptwo->next);
		}
	}

	return (NULL);
}
