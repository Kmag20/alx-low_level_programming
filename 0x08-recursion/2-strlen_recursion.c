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
