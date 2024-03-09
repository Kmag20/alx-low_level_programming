#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: Pointer to the hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *next_node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				next_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
