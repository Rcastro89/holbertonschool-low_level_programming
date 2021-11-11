#include "lists.h"
/**
 * free_list - add dates of new node
 * @head: struct type list_t
 */
void free_list(list_t *head)
{
	list_t *frenode = NULL;

	while (head != NULL)
	{
		frenode = head->next;
		free(head->str);
		free(head);
		head = frenode;
	}
}
