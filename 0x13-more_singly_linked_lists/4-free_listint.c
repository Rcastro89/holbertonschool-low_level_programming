#include "lists.h"
/**
 * free_listint - free dates of new node
 * @head: struct type free_listint
 */
void free_listint(listint_t *head)
{
	listint_t *freelist = NULL;

	while (head != NULL)
	{
		freelist = head->next;
		free(head);
		head = freelist;
	}
}
