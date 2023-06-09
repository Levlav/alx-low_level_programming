#include "main.h"
/**
  * _strspn - returns the length of the initial substring
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int n = 0, r;

        while (*s)
        {
                for (r = 0; accept[r]; r++)
                {
                        if (*s == accept[r])
                        {
                                n++;
                                break;
                        }
                        else if (accept[r + 1] == '\0')
                                return (n);
                }
                s++;
        }
        return (n);
}
