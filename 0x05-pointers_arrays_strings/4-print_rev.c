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
	int numchar;
	int j;
	int len;

        for (numchar = 0; *s != '\0'; s++)
        {
                numchar++;
        }
	len = numchar;
	

	for (j = len; j >= 1; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
