#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t
 * Return: number of nodes.
 */
void free_list(list_t *head)
{
	list_t *copy;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			copy = head->next;
			free(head->str);
			free(head);
			head = copy;
		}
		free(head->str);
		free(head);
	}
}
