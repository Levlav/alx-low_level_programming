#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments
  * @argc: number of arguments
  * @argv: aray of arguments
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
