#include "lists.h"
/**
 * sum_dlistint - add n
 * @head: double linked list
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *my_list = head;
	int result = 0;

	while (my_list)
	{
		result += my_list->n;
		my_list = my_list->next;
	}
	return (result);
}
