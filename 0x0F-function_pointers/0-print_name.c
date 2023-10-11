#include "function_pointers.h"

/**
 * print_name - functions that prints a name
 *
 * @name: name
 * @f: function pointer.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
