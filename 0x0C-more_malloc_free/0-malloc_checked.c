#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks whether malloc works well
 *
 * @b: bytes
 *
 * Return: pointer to alloced mem or 98 for erro
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
