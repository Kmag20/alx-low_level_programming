#include "main.h"

/**
 * _isalpha - returns 1 if the input is an alphabet
 * (lowercase or alphabet), it also returns 0 if otherwise
 *
 * @c: character type 
 * Return: 1 for lowercase , 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

