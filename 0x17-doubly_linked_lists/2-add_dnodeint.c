#include "lists.h"

/**
 * add_dnodeint - prints all the elements of a list_t list
 * @head: list_t
 * @n: int
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *copy = malloc(sizeof(dlistint_t));

	if (copy == NULL)
		return (NULL);

	copy->n = n;
	copy->next = *head;
	*head = copy;
	return (*head);
}
