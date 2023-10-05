#include "main.h"

/**
 * string_nconcat - concatenated two strings
 *
 * @s1: string uno
 * @s2: string two
 * @n: n bytes of string two
 *
 * Return: pointer to newly alloced space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int total_len = 0;
	unsigned int str1 = 0, str2 = 0;
	unsigned int i, j;
	char *p;

	if (s2 == NULL)
		s2 = ' ';
	while (s1[str1])
		str1++;

	while (s2[str2])
		str2++;

	if (n > str2)
		n = str2;

	total_len += str1;
	total_len += n;
	total_len++;

	p = malloc(total_len);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
		p[i] = s1[i];

	for (j = 0; n > 0; i++, j++, n--)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}
