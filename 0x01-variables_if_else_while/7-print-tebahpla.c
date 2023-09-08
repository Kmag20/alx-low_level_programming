#include <stdio.h>
/**
 * main - Entry point of our program
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
