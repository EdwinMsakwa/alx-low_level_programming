#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the numeric characters in ascending order.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int digitStartAsciiCode = 48;
	int digitStopAsciiCode = 57;


	while (digitStartAsciiCode <= digitStopAsciiCode)
	{
		putchar(digitStartAsciiCode);

		if (digitStartAsciiCode != 57)
		{
			putchar(44);
		}

		digitStartAsciiCode += 1;
	}

	putchar(10);

	return (0);
}

