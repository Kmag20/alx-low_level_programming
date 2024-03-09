#include "hash_tables.h"
#include <stdio.h>

/**
 * struct KeyValuePair - Custom dictionary for easy printing
 *
 * @key: key
 * @value: value
 */
/*typedef struct KeyValuePair {
	char *key;
	char *value;
} dict;*/

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

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s', ", node->key, node->value);

			node = node->next;
		}
	}
	printf("}\n");
}
