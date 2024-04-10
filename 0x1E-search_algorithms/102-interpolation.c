#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 * of integers using the interpolation search algorithms
 *
 * @array: pointer to the first element of an array
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: index of the value in the array
 * If array is NULL or value not in array, -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0; r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
