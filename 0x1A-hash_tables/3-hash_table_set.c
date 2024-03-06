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
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	item->key = malloc(strlen(key) + 1);
	if (item->key == NULL)
		return (0);
	strcpy(item->key, key);
	item->value = value_copy;
	strcpy(item->value, value);
	item->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = item;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			current = ht->array[index];
			free(current->value);
			current->value = value_copy;
			return (1);
		}

		current = ht->array[index];
		item->next = current;
		ht->array[index] = item;
	}
	return (1);
}

