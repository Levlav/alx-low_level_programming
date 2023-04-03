#include "main.h"
/**
  * _strchr - searches for the first occurrence of the character 
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)

		return (&s[i]);
	}
	return ('\0');
}
