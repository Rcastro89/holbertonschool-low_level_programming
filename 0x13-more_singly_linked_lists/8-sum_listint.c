#include "lists.h"
/**
 * sum_listint - sum (n) node
 * @head: list linked singly
 * Return: sum values
 */
int sum_listint(listint_t *head)
{
	int j = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			j = j + head->n;
			head = head->next;
		}
	}
	return (j);
}
