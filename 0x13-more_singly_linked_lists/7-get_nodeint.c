#include "lists.h"
/**
 * get_nodeint_at_index - print index node
 * @head: list linked singly
 * @index: index to evaluate
 * Return: value index of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, j = 0;
	listint_t *inter = head;

	while (inter != NULL)
	{
		inter = inter->next;
		j++;
	}
	if (index >= j)
	{
		inter = NULL;
		return (inter);
	}
	inter = head;
	for (i = 0; i < index; i++)
	{
		inter = inter->next;
	}
	return (inter);
}
