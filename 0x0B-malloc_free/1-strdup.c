#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies str to a dynamically allocated space
 *
 * @str - string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	int n, i = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0');
	ch = malloc(sizeof(char) * i);

	for (n = 0; n < i; n++)
	{
		ch[n] = str[n];
	}

	return (ch);
}
	
