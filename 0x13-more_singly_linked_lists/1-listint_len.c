#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes in a listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
