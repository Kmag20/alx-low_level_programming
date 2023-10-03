#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: character
 * @s2: character
 *
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, n = 0, m = 0;
	char *ch;

	while (s1[n] != '\0')
		n++;

	while (s2[m] != '\0')
		m++;

	m += n;
	ch = malloc((sizeof(char) * m) + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i] !=  '\0'; i++)
		ch[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		ch[j + i] = s2[j];

	ch[j + i] = '\0';
	return (ch);

}
