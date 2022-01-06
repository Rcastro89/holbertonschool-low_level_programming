#include "lists.h"

/**
 * print_dlistint - count numbers of nodes
 * @h: node
 * Return: (number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
