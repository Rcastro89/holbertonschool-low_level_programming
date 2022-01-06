#include "lists.h"

/**
 * add_dnodeint - add dates of new node
 * @head: struct type dlist_t
 * @n: integer
 * Return: (list_t)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_dlist;

	new_dlist = malloc(sizeof(dlistint_t));
	if (new_dlist == NULL)
		return (NULL);
	new_dlist->n = n;
	new_dlist->next = *head;
	*head = new_dlist;
	return (*head);
}
