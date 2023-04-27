#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *now;

	while ((now = head) != NULL)
	{
		head = head->next;
		free(now->str);
		free(now);
	}
}
