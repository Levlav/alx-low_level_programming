#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j, k;
	unsigned int a;

	a = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	k = 1;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			a += k;
		k *= 2;
	}
	return (a);
}
