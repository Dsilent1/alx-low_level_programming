#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: pointer to the first element in the listint_t list
 * @n: data to insert in the new node
 * Return: A pointer to the new node, or NULL if the function fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
