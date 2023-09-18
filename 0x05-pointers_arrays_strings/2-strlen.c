#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: character string
 *
 * Return: the length of a string (int)
 */
int _strlen(char *s)
{
	int numchar;

	for (numchar = 0; *s != '\0'; *s++,numchar++)
	return (numchar);
}



