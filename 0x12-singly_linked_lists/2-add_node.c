#include "lists.h"

/**
 * add_node - adds anode at the start
 * @head: the 1st element
 * @str: the characters
 *
 * Return: head address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *th;
	size_t k;

	th = malloc(sizeof(list_t));
	if (th == NULL)
	{
		return (NULL);
	}
	th->str = strdup(str);
	for (k = 0; str[k]; k++)
	{
		;
	}
	th->len = k;
	th->next = *head;
	*head = th;

	return (*head);
}
