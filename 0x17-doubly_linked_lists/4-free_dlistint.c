#include "lists.h"
/**
 * free_list - add dates of new node
 * @head: struct type list_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *frenode = NULL;

	while (head != NULL)
	{
		frenode = head->next;
		free(head);
		head = frenode;
	}
}
