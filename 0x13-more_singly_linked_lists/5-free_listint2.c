#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t
 * Return: number of nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *copy, *last;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
		{
			copy = last->next;
			free(last);
			last = copy;
		}
		free(last);
		*head = NULL;
	}

}
