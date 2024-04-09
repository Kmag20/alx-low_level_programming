#include <stdio.h>
#include "search_algos.h"

/**
 * compar - Comparison function which computes a - b
 * and returns the value of this computation
 *
 * @a: pointer to a - key
 * @b: pointet to index of the midpoint value
 * @array: pointer to our array
 *
 * Return: An integer less than, equal or greater than midpoint
 */
int compar(const int *a, const int b, int *array)
{
	int mp_value;

	mp_value = array[b];
	return (*a - mp_value);
}

/**
 * search_list - prints the search list
 * @left: left side of list
 * @right: right side of list
 * @array: Pointer to an array
 *
 * Return: None
*/
void search_list(int left, int right, int *array)
{
	printf("Searching in array: ");
	for (int i = left; i <= right; ++i)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: Index to where value is located
 * if value is not present in array OR array is NULL return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int midpoint;
	int comparison;

	left = 0;
	right = size - 1;
	midpoint = (left + right) / 2;
	search_list(left, right, array);
	while (left <= right)
	{
		comparison = compar(&value, midpoint, array);
		if (comparison < 0)
		{
			left = left;
			right = midpoint - 1;
			midpoint = (left + right) / 2;
			if (left > right)
				break;
			search_list(left, right, array);
		}
		else if (comparison > 0)
		{
			left = midpoint + 1;
			right = right;
			midpoint = (left + right) / 2;
			if (left > right)
				break;
			search_list(left, right, array);
		}
		else if (comparison == 0)
		{
			return (midpoint);
		}
	}

	return (-1);
}
