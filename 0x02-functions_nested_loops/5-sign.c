#include "main.h"

/**
 * print_sign - Determines 1 if n is greater, equal or less than 0
 *
 * @n: integer data type
 * Return: 1 if n is greater than 0. 0 is zero. -1 is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

