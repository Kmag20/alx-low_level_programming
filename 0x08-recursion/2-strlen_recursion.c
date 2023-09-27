#include "main.h"

/**
 * _strlen_recursion - prints the length of astring recursively
 *
 * @s: string
 *
 * Return: int 
 */
int cnt = 0;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
