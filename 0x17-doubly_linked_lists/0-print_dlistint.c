#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
