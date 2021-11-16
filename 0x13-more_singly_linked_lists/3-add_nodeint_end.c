#include "lists.h"
/**
 * add_nodeint_end - add node to end of list
 * @head: adress list
 * @n: integer to add
 * Return: list add to end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list;
	listint_t *list_inter;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_list->n = n;
		new_list->next = NULL;
		*head = new_list;
		return (new_list);
	}
	list_inter = *head;
		while (list_inter->next != NULL)
	{
		list_inter = list_inter->next;
	}
	new_list->n = n;
	list_inter->next = new_list;
	return (new_list);
}
