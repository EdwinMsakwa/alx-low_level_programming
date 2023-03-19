#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the base 10 numeric characters.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int startAsciiCode = 48;
	int stopAsciiCode = 57;

	while (startAsciiCode <= stopAsciiCode)
	{
		putchar(startAsciiCode);
		startAsciiCode += 1;
	}

	putchar(10);

	return (0);
}
