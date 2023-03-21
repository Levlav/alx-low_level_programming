#include "main.h"
/**
 * print alphabet x10 followed by new line
 * print 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}


