#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t
 * @str: char
 * Return: number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *copy, *secLast;

	copy = malloc(sizeof(list_t));
	if (copy == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	copy->str = strdup(str);
	copy->len = i;
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
