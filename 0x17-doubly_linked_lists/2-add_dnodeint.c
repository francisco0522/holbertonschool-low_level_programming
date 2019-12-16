#include "lists.h"
<<<<<<< HEAD
/**
 * add_dnodeint - prints all the elements of a list
 * @head: listint_t
=======

/**
 * add_dnodeint - prints all the elements of a list_t list
 * @head: list_t
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
 * @n: int
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t  *copy = malloc(sizeof(dlistint_t));
=======
	dlistint_t *copy = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd

	if (copy == NULL)
		return (NULL);

	copy->n = n;
<<<<<<< HEAD
	copy->next = *head;
	*head = copy;

=======
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
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
	return (*head);
}
