#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints opcodes
  * @argc: argument
  * @argv: argument lis
  * Return: 0 success
  */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *code_ptr = (unsigned char *)main;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(code_ptr + i));
	}
	printf("\n");

	return (0);
}

