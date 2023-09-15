#include "main.h"

/**
 * _isupper - checks whether a char is uppercase or lowercase
 *
 * @c: integer representing ascii rep of characters
 *
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
