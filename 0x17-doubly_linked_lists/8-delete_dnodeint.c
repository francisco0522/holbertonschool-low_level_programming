#include "lists.h"
/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: listint_t
 * @index: int
 * Return: sum.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *copy, *node;

	i = 0;
	node = *head;
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)

	if (index == 0)
	{
		copy->next = node;
		*head = copy;
	}

	while (i < (index - 1))
	{
		if (node == NULL)
		{
			free(copy);
		}
		node = node->next;
		i++;
	}
		copy->next = node->next;
		node->next = copy;
	return (0);
}
