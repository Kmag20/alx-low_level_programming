#include "main.h"

/**
 * _abs - absolute values of an in teger
 *
 * @i: input number of the data type integer
 *
 * Return: |abs|
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
