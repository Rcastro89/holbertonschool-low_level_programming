#include "lists.h"
/**
 * listint_len - print linked singly list
 * @h: list type listint_t
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t ret = 0;

	while (h != NULL)
	{
		ret++;
		h = h->next;
	}
	return (ret);
}
