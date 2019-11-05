#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: listint_
 * @index: unsigned int
 * Return: head node's data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	i = index;
	if (head != NULL)
	{
		while (i >= 0)
		{
			head = head->next;
			i--;
		}
		return (head);
	}
	return (NULL);
}
