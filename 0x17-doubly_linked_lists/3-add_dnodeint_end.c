#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a listint_t list.
 * @head: dlistint_t
 * @n: int
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy, *secLast;

	secLast = *head;
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);


	copy->n = n;
	if (*head == NULL)
	{
		copy->next = NULL;
		copy->prev = NULL;
		*head = copy;
	}
	else
	{
		while (secLast->next != NULL)
			secLast = secLast->next;
		copy->next = NULL;
		copy->prev = secLast;
		secLast->next = copy;
	}
	return (copy);
}
