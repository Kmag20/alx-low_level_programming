#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table itself
 * @key: The string key
 * @value: Value associated with the key
 * Return: 1 if succeeded else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	hash_node_t *current;
	unsigned long int index;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (0);
	strcpy(item->key, key);

	item->value = malloc(strlen(value) + 1);
	if (item->value == NULL)
		return (0);
	strcpy(item->value, value);

	item->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL)
		return (0);

	ht->array[index] = item;

	return (1);
}

