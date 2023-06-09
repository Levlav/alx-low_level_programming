#include "main.h"
/**
  * _memcpy - copy memory area
  * @dest: dest memory area
  * @src: source memory area
  * @n: number of bytes to copy
  *
  * Return: dest - memory area replaced
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
