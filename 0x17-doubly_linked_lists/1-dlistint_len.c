#include "lists.h"
/**
<<<<<<< HEAD
 * list_len - returns the number of elements in a linked list_t list
=======
 * dlistint_len - returns the number of elements in a linked list_t list
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
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
