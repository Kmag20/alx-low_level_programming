#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: strin gprinted between the strings
 * @n: number of strings passed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
