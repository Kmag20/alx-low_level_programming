#include "main.h"

/**
 * _memset - fill memory space with constant byte
 *
 * @s: memory space
 * @b: constant byte
 * @n: number of characters/bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
