#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list
 * @head: A pointer to the first node in list
 * @n: A data to be inserted in that new node
 *
 * Return: pointer to the new node, or NULL if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
