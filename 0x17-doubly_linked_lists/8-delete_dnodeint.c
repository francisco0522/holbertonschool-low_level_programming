#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: listint_t
 * @index: int
 * Return: sum.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy, *node;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		copy = *head;
		*head = copy->next;
		(*head)->prev = NULL;
		free(copy);
		return (1);
	}
	node = *head;
	while (index > 1 && node->next)
		node = node->next;
		index--;
	if (index == 1)
	{
		copy = node->next;
		node->next = node->next;
		if (node->next)
			node->next = node;
			node->prev = node;
		free(copy);
		return (1);
	}
	return (-1);
}
