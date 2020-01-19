#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht - hash_table_t
 * @key - char
 * @value - char
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	if (insertElement(&(ht->array[i]), key, value) == NULL)
		return (0);

	return (1);
}
/**
 * insertElement - adds an element to the hash table.
 * @element - hash_table_t
 * @key - char
 * @value - char
 * Return: element.
 **/
hash_node_t *insertElement(hash_node_t **element, const char *key, const char *value)
{
	hash_node_t *node;

	node = *element;

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (*element);
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *element;
	*element = node;

	return (*element);
}
