#include "main.h"
#include <stdio.h>

/**
  * main - Prints the number of arguments passed
  * @argc: count argument
  * @argv: vector argument
  *
  * Return: zero
  */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

