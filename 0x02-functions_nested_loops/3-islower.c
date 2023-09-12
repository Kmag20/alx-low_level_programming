#include "main.h"

/**
 * _islower - returns 1 if int c is lower
 *
 * Return: 0 if otherwise
 */
int islower(int c)
{
	if (c >= 97 && c<= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
