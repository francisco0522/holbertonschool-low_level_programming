#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
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
