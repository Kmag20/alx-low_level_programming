#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 *
 * @size: integer
 * @c: char
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}

	ch[i++] = '\0';

	return (ch);
}

