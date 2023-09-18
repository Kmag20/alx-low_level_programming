#include "main.h"

/**
 * _puts - prints a character on screen followed by a newline
 *
 * @str: a string 
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}	
