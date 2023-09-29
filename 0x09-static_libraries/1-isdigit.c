#include "main.h"

/**
 * _isdigit - checks whether an input integer(ascii encoded) is
 * a digit
 *
 * @c: Is an integer
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
