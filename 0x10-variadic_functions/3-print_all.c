#include "variadic_functions.h"

/**
 * prints_all - prints anything
 *
 * @format: list of types of args passed to a function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, m = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch(format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int)), m = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int)), m = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double)), m = 1;
			break;
		case 's':
			str = va_arg(args, char *), m = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(args);
}
