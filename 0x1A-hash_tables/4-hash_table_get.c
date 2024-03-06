#include "hash_tables.h"
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: Our hash table
 * @key: key you are looking for
 * Return: Our value if key exist, if Key is Null, key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
