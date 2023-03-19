#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Prints the numeric combinations of two digit numbers
 * in ascending order.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int firstDigitStartAsciiCode = 48;
	int firstDigitStopAsciiCode = 57;


	while (firstDigitStartAsciiCode <= firstDigitStopAsciiCode)
	{
		int secondDigitAsciiStart = 48;
		int secondDigitAsciiStop = 57;

		while (secondDigitAsciiStart <= secondDigitAsciiStop)
		{
			putchar(firstDigitStartAsciiCode);
			putchar(secondDigitAsciiStart);

			if (firstDigitStartAsciiCode == 57 && secondDigitAsciiStart == 57)
			{
				break;
			}

			putchar(32);

			secondDigitAsciiStart += 1;
		}

		firstDigitStartAsciiCode += 1;
	}

	putchar(10);

	return (0);
}

