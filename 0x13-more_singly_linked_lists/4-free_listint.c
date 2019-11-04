#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: listint_t
 * Return: number of nodes.
 */
void free_listint(listint_t *head)
{
	listint_t *copy;

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
