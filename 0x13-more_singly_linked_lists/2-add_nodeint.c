#include "lists.h"

/**
 * add_nodeint - prints all the elements of a list_t list
 * @head: listint_t
 * @n: int
 * Return: number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *copy = malloc(sizeof(listint_t));

	if (copy == NULL)
		return (NULL);

	copy->n = n;
	copy->next = *head;
	*head = copy;

	return (*head);
}
