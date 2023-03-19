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
	int lowercaseStartAsciiCode = 97;
	int lowercaseStopAsciiCode = 122;
	int uppercaseStartAsciiCode = 65;
	int uppercaseStopAsciiCode = 90;

	while (lowercaseStartAsciiCode <= lowercaseStopAsciiCode)
	{
		putchar(lowercaseStartAsciiCode);
		lowercaseStartAsciiCode += 1;
	}

	while (uppercaseStartAsciiCode <= uppercaseStopAsciiCode)
	{
		putchar(uppercaseStartAsciiCode);
		uppercaseStartAsciiCode += 1;
	}

	putchar(10);

	return (0);
}
