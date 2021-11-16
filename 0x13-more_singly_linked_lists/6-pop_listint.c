#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: list linked singly
 * Return: value n of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *freelist = NULL;
	int ret = 0;

	if (*head == NULL)
		return (0);
	freelist = (*head)->next;
	ret = (*head)->n;
	free(*head);
	*head = freelist;
	return (ret);
}
