#include "lists.h"
<<<<<<< HEAD
/**
 * add_dnodeint_end - adds a new node at the end of a list.
=======

/**
 * add_dnodeint_end - adds a new node at the end of a listint_t list.
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
 * @head: dlistint_t
 * @n: int
 * Return: number of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy, *secLast;

<<<<<<< HEAD
=======
	secLast = *head;
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);


	copy->n = n;
<<<<<<< HEAD
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
=======
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
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
}
