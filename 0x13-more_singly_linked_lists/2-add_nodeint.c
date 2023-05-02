#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: the data to insert in that new node
 *
 * Return: a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nowt;

	nowt = malloc(sizeof(listint_t));
	if (nowt == NULL)
	{
		return (NULL);
	}

	nowt->n = n;
	nowt->next = *head;
	*head = new;

	return (*head);
}
