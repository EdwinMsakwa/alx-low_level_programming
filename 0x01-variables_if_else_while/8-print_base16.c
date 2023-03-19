#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the hexidecimal characters.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int digitStartAsciiCode = 48;
	int digitStopAsciiCode = 57;

	int characterStartAsciiCode = 97;
	int characterStopAsciiCode = 102;

	while (digitStartAsciiCode <= digitStopAsciiCode)
	{
		putchar(digitStartAsciiCode);
		digitStartAsciiCode += 1;
	}

	while (characterStartAsciiCode <= characterStopAsciiCode)
	{
		putchar(characterStartAsciiCode);
		characterStartAsciiCode += 1;
	}

	putchar(10);

	return (0);
}
