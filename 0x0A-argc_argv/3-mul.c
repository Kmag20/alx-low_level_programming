#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
		printf("Error");
		return (1);
	else
	{
		result = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}	
