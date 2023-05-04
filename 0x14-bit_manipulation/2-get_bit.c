#include "main.h"
#include <stdio.h>

/**
 *get_bit- get the value of a bit at a given index
 *@n: unsigned integer
 *@index: is the index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
		return (0);

	return (-1);
}
