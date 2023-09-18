#include "main.h"

/**
  * _print_rev - prints a strign in reverse
  * @s: String 
  *
  * Return: void
  */
void print_rev(char *s)
{
	int i, j, len = _strlen(s);
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		str[i] = str[len - i -1];
		str[len - i -1] = temp;
	}

	for (j = 0; j < len - 1; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
