#include "main.h"
/**
 * flip_bits - return the difference between 2 numbers
 * @n: first number
 * @m: second number
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0;
	unsigned int i = 0;

	sum = n ^ m;

	while (sum > 0)
	{
		if (sum & 1)
			i++;
		sum >>= 1;
	}
	return (i);
}
