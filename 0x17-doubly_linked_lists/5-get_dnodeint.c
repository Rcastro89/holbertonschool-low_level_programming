#include "lists.h"
/**
 * get_dnodeint_at_index - search node
 * @head: double linked list
 * @index: integer
 * Return: node select
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *select_node = head;
	unsigned int com_index = 0;

	for (; select_node; com_index++)
	{
		if (index == com_index)
			return (select_node);
		select_node = select_node->next;
	}
	return (NULL);
}
