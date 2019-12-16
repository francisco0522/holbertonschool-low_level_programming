#include "lists.h"
<<<<<<< HEAD
/**
 * free_dlistint - frees a list
=======

/**
 * free_dlistint - frees a listint_t list
>>>>>>> 74d1789039337fcdfc2badf178e8c103c26091cd
 * @head: listint_t
 * Return: number of nodes.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			copy = head->next;
			free(head);
			head = copy;
		}
		free(head);
	}
}
