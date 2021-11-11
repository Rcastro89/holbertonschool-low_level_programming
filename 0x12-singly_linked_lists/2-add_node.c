#include "lists.h"
/**
 * add_node - add dates of new node
 * @head: struct type list_t
 * @str: string to add
 * Return: (list_t)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	int len;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);
	new_list->str = strdup(str);
	len = strlen(str);
	new_list->len = len;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
