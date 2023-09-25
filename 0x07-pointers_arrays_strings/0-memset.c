#include "main.h"

/**
 * _memset - fills the first n bytes of memory pointed by s wth const byte b
 *
 * @s: - pointer to the memory area to be filled
 * @b: character to or constatn bytes 
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unisigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	s[i + 1] = '\0';

	return (s);
}
