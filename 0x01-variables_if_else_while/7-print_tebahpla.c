#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the alphabetic characters in reverse.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int startAsciiCode = 122;
	int stopAsciiCode = 97;

	while (startAsciiCode >= stopAsciiCode)
	{
		putchar(startAsciiCode);
		startAsciiCode -= 1;
	}

	putchar(10);

	return (0);
}
