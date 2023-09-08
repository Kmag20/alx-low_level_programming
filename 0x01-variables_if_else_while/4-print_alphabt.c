#include <stdio.h>

/**
 * Main - entry point for our code
 *
 * Return: Always 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <=z; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
