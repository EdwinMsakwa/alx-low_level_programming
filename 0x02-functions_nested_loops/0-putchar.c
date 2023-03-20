#include <stdio.h>
#include <unistd.h>
#include <string.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Main entry point to the program.
 * Description: The program prints the string _putchar to the standard output.
 * Return: returns 0 upon success , otherwise 1.
 */

int main(void)
{
	char message[] = "_putchar";

	for (int i = 0; i < strlen(message); i++)
	{
		if (_putchar(message[i]) == -1)
		{
			break;
		}
	}

	_putchar('\n');

	return (0);
}