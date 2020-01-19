#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: hash_table_t
 * @key: char
 * Return:  the value associated with the element, or NULL if key couldn’t be found.
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *nod;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	nod = ht->array[i];
	while (nod)
	{
		if (strcmp(nod->key, key) == 0)
			return(nod->value);
		nod = nod->next;
	}
	return (NULL);
}
