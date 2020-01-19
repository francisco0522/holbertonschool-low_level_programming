#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: hash_table_t
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *first;
	hash_node_t *sec;

	i = 0;
	for (i = 0; i < ht->size; i++)
	{
		first = ht->array[i];
		while(!(sec = first))
		{
			first = first->next;
			free(sec->key);
			free(sec->value);
			free(sec);
		}
	}
	free(ht->array);
	free(ht);
}
