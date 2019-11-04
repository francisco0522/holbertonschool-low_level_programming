#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: listint_t
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
