#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t
 * @head:head of l list
 * @str: string in the list
 *
 * Return: head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t k;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	for (k = 0; str[k]; k++)
	{
		;
	}

	new->len = k;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
