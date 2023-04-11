#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s = malloc((sizeof(char) * (i + j + 1)));

	if (s == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}

	s[i] = '\0';
	return (s);
}
