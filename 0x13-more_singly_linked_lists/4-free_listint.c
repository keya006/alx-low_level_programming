#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the head of a list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *mist;

	while ((mist = head) != NULL)
	{
		head = head->next;
		free(mist);
	}
}
