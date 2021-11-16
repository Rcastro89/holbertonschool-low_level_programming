#include "lists.h"
/**
 * add_nodeint - add new node
 * @head: adress recived
 * @n: integer to add
 * Return: list created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;
	return (*head);
}
