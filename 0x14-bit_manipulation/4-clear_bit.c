#include "main.h"

/**
 * clear_bit - sets the calue ofa bit to 0 at any given index
 * @n: pointer to an int
 * @index: position of a bit in binary to be cleared
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
