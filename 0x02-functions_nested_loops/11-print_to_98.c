#include <stdio.h>

/**
 * print_to_98 - prints all the values between input
 * value n and 98
 *
 * @n: interger data type
 *
 * Return: Nothing lol
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}


