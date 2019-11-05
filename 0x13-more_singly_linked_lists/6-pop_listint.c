#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list, and returns the head nodes data (n).
 * @head: list_t
 * Return: head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *copy;

	if (head != NULL && *head != NULL)
	{
		copy = *head;
		n = copy->n;
		*head = copy->next;
		free(copy);
		return (n);
	}
	return (0);
}
