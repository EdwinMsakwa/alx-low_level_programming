#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Printing specified message.
 * Description: The program prints a the provided message
 * using the printf function.
 * Return: returns 0 upon success , otherwise 1.
 */

int main(void)
{
	char message[] = "with proper grammar, but the outcome is a piece of art,\n";

	printf("%s", message);

	return (0);
}
