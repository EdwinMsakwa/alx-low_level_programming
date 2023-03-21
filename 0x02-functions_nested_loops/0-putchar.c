#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - Main entry point to the program.
 * Description: The program prints the string _putchar to the standard output.
 * Return: returns 0 upon success , otherwise 1.
 */



int main(void)
{
	char message[] = "_putchar";
	long unsigned int i;

	for (i = 0; i < strlen(message); i++)
	{
	if (_putchar(message[i]) == -1)
		{
			break;
		}
	}

	_putchar('\n');

	return (0);
}
