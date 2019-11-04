#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: listint_t
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
