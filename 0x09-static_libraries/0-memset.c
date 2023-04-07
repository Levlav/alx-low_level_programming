#include "main.h"
/**
  * _memset - fuction copies the characters of a string to another
  * @s: memory area to fill
  * @b: constant byte to fill
  * @n: bytes of memory area pointed to by s
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}
