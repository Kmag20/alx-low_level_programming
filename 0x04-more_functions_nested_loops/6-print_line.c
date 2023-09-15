#include "main.h"

/**
 * print_line - draws a straight line using underscores
 *
 * @n: how long the line is
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
