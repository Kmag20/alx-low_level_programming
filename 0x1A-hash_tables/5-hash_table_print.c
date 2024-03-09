#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: Pointer to the hash table
 * Return: null
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
				{
					printf(", ");
				}
			}
			comma = 1;
		}
	}
	printf("}\n");
}
