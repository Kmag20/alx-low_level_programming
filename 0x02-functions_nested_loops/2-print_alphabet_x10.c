#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return : 0 on Success
 */

void print_alphabet_x10(void)
{
	int v, w;

	for (v = 0; v <= 9; v++)
	{
		for (w = 97; w <= 122; w++)
		{
			_putchar(w);
		}
	_putchar('\n');
	}
}
