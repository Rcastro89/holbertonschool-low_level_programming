#include "lists.h"
/**
 * insert_nodeint_at_index - insert nwe node in idx position
 * @head: list linked
 * @n: date to add
 * @idx: position to insert
 * Return: (new node)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *new_list;
	listint_t *list_inter = *head;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_list->next = *head;
		*head = new_list;
		return (new_list);
	}
	new_list->n = n;
	new_list->next = NULL;
	while (list_inter != NULL && j < idx)
	{
		if (j == (idx - 1))
		{
			new_list->next = list_inter->next;
			list_inter->next = new_list;
			return (new_list);
		}
		else
			list_inter = list_inter->next;
		j++;
	}
	return (NULL);
}

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nuevo;
	listint_t *Temporal = *head;
	unsigned int iterador = 0;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL || head == NULL)
	{
		return (NULL);
	}

	nuevo->n = n;
	nuevo->next = NULL;

	if (idx == 0)
	{
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}

	iterador = 0;
	while (Temporal && iterador < idx)
	{
		if (iterador == idx - 1)
		{
			nuevo->next = Temporal->next;
			Temporal->next = nuevo;
			return (nuevo);
		}
		else
		{
			Temporal = Temporal->next;
		}
		iterador++;
	}
	return (NULL);
}