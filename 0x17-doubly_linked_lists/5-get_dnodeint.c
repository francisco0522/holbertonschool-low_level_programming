#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: listint_
 * @index: unsigned int
 * Return: head node's data (n).
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list;
	unsigned int i;

	i = 0;
	list = head;
	if (head != NULL)
	{
		while (list && i < index)
		{
			list = list->next;
			i++;
		}
		return (list);
	}
	return (0);
}
