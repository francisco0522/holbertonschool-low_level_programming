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

	if (head == NULL)
		return (NULL);

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
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head)->prev = copy;
		copy->next = *head;
		copy->prev = NULL;
		*head = copy;
	}
	return (*head);
}
