#include "main.h"

/**
 * set_bit - sets the value of a bit to a at a given index
 * @n: pointer to an int
 * @index: bit in the binary representation to be set to 1
 * Return: 1 if it worked, -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
