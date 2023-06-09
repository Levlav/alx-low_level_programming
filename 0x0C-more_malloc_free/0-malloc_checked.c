#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * malloc_checked - Allocates memory
  * @b: size to allocated
  *
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
