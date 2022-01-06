#include "lists.h"

/**
 * dlistint_len - count numbers of elements
 * @h: node
 * Return: (number of nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
