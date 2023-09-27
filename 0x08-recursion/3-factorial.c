#include "main.h"

/**
 * factorial - returns a factorial of a given num
 *
 * @n: integer
 *
 * Return: int factorial of a number
 */
int factorial(int n)
{
	if (n < 0) return -1;
	if (n == 0) return 1;
	else
	{
		return (n * factorial(n - 1));
	}
}
