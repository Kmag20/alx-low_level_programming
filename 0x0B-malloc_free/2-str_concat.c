#include "main.h"

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

	if ( s1 == NULL || s2 == NULL)
		return (NULL);

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

	for (j = 1; s2[j] != '\0'; j++)
		ch[j + i] = s2[j];

	ch[m + 1] = '\0';
	return (ch)

}
