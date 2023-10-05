#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocated memory for an array init to zero
 *
 * @nmeb: num elements
 * @size: byte size
 *
 * Return: pointer to alloced memory
 * if nmeb | size is zero return NULL
 * if malloc fails return NULL also
 */
void *calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	for (j = 0; j < (nmemb * size); j++)
		ptr[j] = 0;

	return (ptr);
}
