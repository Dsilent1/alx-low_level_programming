#include "lists.h"

/**
 * dlistint_len - It counts the number of elements in a linked dlistint_t list.
 * @h: Head of the dlistint_t list.
 *
 * Return: Number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
