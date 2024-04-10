#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - uses a binary search algo
 *
 * @array: Pointer to the array
 * @size: size of the array
 * @value: key we have been looking for
 *
 * Return: Index to the key in the array
 */
int jump_search(int *array, size_t size, int value)
{
        size_t start, end, i;

        if (array == NULL)
                return (-1);

        start = 0;
        end = sqrt(size - 1);
        printf("Value cheched array[%lu] = [%lu]\n", start, start);

        while (array[end] < value)
        {
                start = end;
                end = end + sqrt(size - 1);
                printf("Value cheched array[%lu] = [%lu]\n", start, start);
                if (end > size)
                {
                        //end = end + sqrt(size);
                        break;
                }

        }

        printf("Value found between indexes [%lu] and [%lu]\n",
                                start, end);

        for (i = start; i <= end; ++i)
        {
                if (array[i] == value)
                {
                        return (i);
                }
        }
        return (-1);
}
