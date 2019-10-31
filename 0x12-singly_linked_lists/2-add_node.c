#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t	*copy = malloc(sizeof(list_t));
	if (copy == NULL)
		return (NULL);

	while(str[i] != '\0')
	i++;

	copy->str = strdup(str);
	copy->len = i;
	copy->next = *head;
	*head = copy;

	return(*head);
}
