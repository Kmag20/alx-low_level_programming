#include <stdio.h>

/**
 * main - adds positive numbers from params from the command line
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *s;

	for (i = 1; i < argc; i++)
		s = argv[i];
		if (*(s + i)  < '0' && *(s + i) > '9')
		       printf("Error\n")
		       return (1);
		else
		{	
			sum += atoi(argv[i]);
		}
		
	printf("%d\n", sum);
	return (0);
}
