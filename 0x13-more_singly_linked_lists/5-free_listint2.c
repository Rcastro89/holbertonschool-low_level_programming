#include "lists.h"
/**
 * free_listint2 - free dates of new node
 * @head: struct type free_listint
 */
void free_listint2(listint_t **head)
{
	listint_t *freelist = NULL;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			freelist = (*head)->next;
			free(*head);
			*head = freelist;
		}
	}
}
