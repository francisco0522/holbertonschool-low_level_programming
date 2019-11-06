#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: listint_t
 * @idx: int
 * @n: n
 * Return: sum.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *copy, *node;

	i = 0;
	node = *head;
	copy = malloc(sizeof(listint_t));
	if (copy == NULL)
		return (NULL);

	copy->n = n;
	if (idx == 0)
	{
		copy->next = node;
		*head = copy;
		return (copy);
	}

	while (i < (idx - 1))
	{
		if (*head == NULL)
		{
			free(copy);
			return (NULL);
		}
		node = node->next;
		i++;
	}
		copy->next = node->next;
		node->next = copy;
		return (copy);
}
