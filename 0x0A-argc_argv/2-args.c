#include "main.h"
#include <stdio.h>

/**
  * main - Prints all argumets received
  * @argc: count argument
  * @argv: vector argument
  *
  * Return: zero
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

