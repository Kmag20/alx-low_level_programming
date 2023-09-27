#include "main.h"

/**
 * _strlen_recursion - prints the length of astring recursively
 *
 * @s: string
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s != '\0')
	{
		cnt++;
		_strlen_recursion(s + 1);
	}
	else
	{
		return (cnt);
	}
}
