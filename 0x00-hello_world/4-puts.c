#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Printing specified message.
 * Description: The program prints a the provided message
 * using the puts function.
 * Return: returns 0 upon success , otherwise 1.
 */

int main(void)
{
	const char *m = "\"Programming is like building \
a multilingual puzzle";

	puts(m);

	return (0);
}
