#include "main.h"

/**
 * _strchr - pointer to the first occurrence of char c in string s
 *
 * @s:string
 * @c: character 
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i]) return (s + i);
	}
	return ('\0');
}
