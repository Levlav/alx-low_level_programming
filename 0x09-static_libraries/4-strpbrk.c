#include "main.h"
/**
  * _strpbrk - Returns a pointer to the first occurrence
  * @s: source string
  * @accept: accepted characters
  *
  * Return: Always 0
  */
char *_strpbrk(char *s, char *accept)
{
        int a;

        while (*s)
        {
                for (a = 0; accept[a]; a++)
                {
                if (*s == accept[a])
                return (s);
                }
        s++;
        }
        return ('\0');
}
