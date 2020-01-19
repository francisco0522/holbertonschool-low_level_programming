#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash_table_t
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *nod;
	char *a;

	printf("{");
	a = "";
	for (i = 0; i < ht->size; i++)
	{
		nod = ht->array[i];
		while(nod)
		{
			printf("%s'%s': '%s'", a, nod->key, nod->value);
			a = ", ";
			nod = nod->next;
		}
	}
	printf("}\n");
}
