#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * of a linked list
 * @head: the head of a list.
 * @n: the element n
 *
 * Return: the address of the new element, NUll if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *k;
	listint_t *mist;

	(void)mist;

	k = malloc(sizeof(listint_t));

	if (!k)
	{
		return (NULL);
	}

	k->n = n;
	k->next = NULL;
	mist = *head;
	if (*head == NULL)
	{
		*head = k;
	}
	else
	{
		while (mist->next != NULL)
		{
			mist = mist->next;
		}
		mist->next = k;
	}

	return (*head);
}
