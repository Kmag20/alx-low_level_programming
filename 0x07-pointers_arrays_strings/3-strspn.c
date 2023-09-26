#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt = 0, found_match = 0;
        
	for (i = 0; s[i] != '\0'; i++)
	{
		found_match = 0;
		for (j = 0; j < accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				found_match = 1;
				break;
		}
		if (!(found_match) break;
		cnt++;
	}


	return (cnt);
}
