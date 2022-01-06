#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end
 * @head: Double pointer with address to head of a double linked list.
 * @n:integer.
 * Return: (dlistint_t)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endnode;
	dlistint_t *end;

	endnode = malloc(sizeof(dlistint_t));
	if (!endnode)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	endnode->prev = NULL;
	end = *head;
	if (*head == NULL)
		*head = endnode;
	else
	{
		while (end->next != NULL)
			end = end->next;
		endnode->prev = end;
		end->next = endnode;
	}
	return (endnode);
}
