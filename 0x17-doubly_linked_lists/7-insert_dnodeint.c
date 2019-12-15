#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: ddlistint_t
 * @idx: int
 * @n: n
 * Return: sum.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *copy, *node;

	i = 0;
	node = *h;
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);

	copy->n = n;
	while (node != NULL && node->prev != NULL)
	{
		headcopy = headcopy->prev;
		*h = (*h)->prev;
	}
	if (idx == 0)
	{
		copy->next = node;
		node->prev = copy;
		copy->prev = NULL;
		*h = copy;
		return (copy);
	}

	while (i < (idx - 1))
	{
		if (node == NULL)
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
