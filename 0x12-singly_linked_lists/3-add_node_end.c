#include "lists.h"
/**
 * add_node - add dates of new node
 * @head: struct type list_t
 * @str: string to add
 * Return: (list_t)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *endnode;
	list_t *end;
	int len;

	endnode = malloc(sizeof(list_t));
	if (endnode == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
			;
	if (*head == NULL)
	{
		endnode->str = strdup(str);
		endnode->len = len;
		endnode->next = NULL;
		*head = endnode;
		return (endnode);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	endnode->str = strdup(str);
	endnode->len = len;
	end->next = endnode;
	return (endnode);
}
