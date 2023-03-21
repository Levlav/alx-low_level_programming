#include "main.h"
/**
 * _islower checks for lowercase characters
 * c = represents a single character
 * Return: 1 if char is lowercase, otherwiwse 0
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
