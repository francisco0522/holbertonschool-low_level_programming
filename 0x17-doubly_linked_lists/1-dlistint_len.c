#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
