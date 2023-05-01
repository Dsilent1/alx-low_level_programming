#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer list of type listint_t to print
 *
 * Return: number of nodes in list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
