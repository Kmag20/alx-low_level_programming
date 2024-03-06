#include "hash_tables.h"

/**
 * key_index - Gives the index of a key wrt to size of array
 *
 * @key: the string key
 * @size: size of the array
 * Return: Index at which the key/val pair should be stored in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
