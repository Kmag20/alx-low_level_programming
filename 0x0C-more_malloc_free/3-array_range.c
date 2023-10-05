#include "main.h"

/**
 * array_range - creates an array o integers
 *
 * @min: min int
 * @max: max int
 *
 * Return: pointer to the newly created array
 * if max > max return NULL
 * if malloc fails return NULL
 */
int *array_range(int min, int max)
{
	int len = max - min;
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	       p[i] = min + i;	

	return (p);
}
