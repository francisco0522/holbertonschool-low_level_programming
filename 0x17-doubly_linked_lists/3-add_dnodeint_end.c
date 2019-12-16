#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: dlistint_t
 * @n: int
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy, *secLast;

	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);


	copy->n = n;
	copy->next = NULL;

	if (*head == NULL)
		*head = copy;
	else
	{
		secLast = *head;
		while (secLast->next != NULL)
			secLast = secLast->next;
		secLast->next = copy;
	}
	return (*head);
}
