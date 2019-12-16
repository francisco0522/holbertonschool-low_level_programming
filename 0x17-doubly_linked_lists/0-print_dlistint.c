#include "lists.h"
/**
<<<<<<< HEAD
 * print_dlistint - prints all the elements of a list
 * @h: list
=======
 * print_dlistint - prints all the elements of a list_t list
 * @h: list_t
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
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
