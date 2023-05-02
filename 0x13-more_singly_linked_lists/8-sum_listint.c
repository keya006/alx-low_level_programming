#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: the head of a list
 *
 * Return: total sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (!head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
