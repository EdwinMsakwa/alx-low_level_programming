#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the alphabet characters.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int startAsciiCode = 97;
	int stopAsciiCode = 122;

	while (startAsciiCode <= stopAsciiCode)
	{
		putchar(startAsciiCode);
		startAsciiCode += 1;
	}

	putchar(10);

	return (0);
}
