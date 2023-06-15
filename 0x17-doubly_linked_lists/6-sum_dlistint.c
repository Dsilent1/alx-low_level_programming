#include "lists.h"

/**
 * sum_dlistint - it will sum all the data of a dlistint_t list.
 * @head: Head of the dlistint_t list.
 *
 * Return: Sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
