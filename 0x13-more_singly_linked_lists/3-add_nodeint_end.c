#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: listint_t
 * @n: int
 * Return: number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *copy, *secLast;

	copy = malloc(sizeof(listint_t));
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
