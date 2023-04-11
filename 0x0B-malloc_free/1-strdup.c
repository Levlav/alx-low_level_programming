#include "main.h"
#include <stdlib.h>

/**
  * _strdup - duplicate to new memory of string
  * @str: the string to be  duplicated
  *
  * Return: duplicated string
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
