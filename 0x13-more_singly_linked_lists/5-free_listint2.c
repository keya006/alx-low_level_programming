#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the head of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *mist;
	listint_t *k;

	if (head != NULL)
	{
		k = *head;
		while ((mist = k) != NULL)
		{
			k = k->next;
			free(mist);
		}
		*head = NULL;
	}
}
