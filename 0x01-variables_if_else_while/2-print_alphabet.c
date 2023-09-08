#include <stdio.h>

/**
 * main - entry point of our code
 *
 * Return: Zero on success
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
