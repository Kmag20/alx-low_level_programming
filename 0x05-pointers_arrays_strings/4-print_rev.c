#include "main.h"

/**
  * _print_rev - prints a strign in reverse
  * @s: String 
  *
  * Return: void
  */
int _strlen(char *s);
void print_rev(char *s)
{
	int i, j, len = _strlen(s);
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i -1];
		s[len - i -1] = temp;
	}

	for (j = 0; j < len - 1; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
