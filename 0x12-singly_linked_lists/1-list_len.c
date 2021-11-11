#include "lists.h"
/**
 * list_len - count nodes
 * @h: struct type list_t
 * Return: (count nodes)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
