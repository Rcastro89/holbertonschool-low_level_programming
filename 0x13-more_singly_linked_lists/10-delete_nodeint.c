#include "lists.h"
/**
 *  delete_nodeint_at_index - delete selected node
 * @head: list linked singly
 * @index: node to delete
 * Return: (1) success.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list_temp = *head;
	listint_t *list_delete = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(list_temp);
		return (1);
	}

	for (; i < (index - 1); i++)
	{
		list_temp = list_temp->next;
		if (list_temp == NULL)
		{
			return (-1);
		}
	}
	list_temp = list_temp->next;
	list_temp->next = list_delete->next;
	free(list_delete);
	return (1);
}
