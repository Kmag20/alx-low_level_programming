#include "main.h"

/**
 * _memset - fill memory space woth constant byte
 *
 * @s: memory space
 * @b: constant byte
 * @n: number of characters/bytes 
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i+=)
	{
		s[i] = b;
	}
	s[i + 1] = '\0';

	return (s);
}
