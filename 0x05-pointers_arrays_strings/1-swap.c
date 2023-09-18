#include "main.h"

/**
 * swap_int - swaps the two interger given in parameters
 *
 * @a - pointer to int a
 * @b - pointer to int b
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
