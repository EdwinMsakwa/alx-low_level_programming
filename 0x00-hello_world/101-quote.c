#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Printing to stderr
 * Description: The program prints the output to stderr.
 * Return: returns 0 upon success , otherwise 1.
 */

int main(void)
{
	const char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	const char *n = "\n";

	write(2, m, strlen(m));
	write(2, n, strlen(n));

	return (1);
}
