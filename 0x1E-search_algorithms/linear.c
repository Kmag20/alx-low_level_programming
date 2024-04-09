#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of ints
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the arrray
 * @value: value to search for
 *
 * Return: first index of the value in the array, if
 * value is not present or array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
