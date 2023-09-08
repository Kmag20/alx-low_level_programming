#include <stdio.h>
/**
 * main - entry point of our code
 *
 * Return: 0 on Success
 */
int main(void)
{
	char num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
