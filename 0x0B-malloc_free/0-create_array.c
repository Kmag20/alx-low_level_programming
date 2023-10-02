#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 *
 * @size: integer
 * @c: char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	int i;

	ch = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	ch[i++] = '\0';

	return (ch);
}

