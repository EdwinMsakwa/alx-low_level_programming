#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Evaluates the last digit of a number and prints
 * a string.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}

	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}

	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less", n, lastDigit);
		printf(" than 6 and not 0\n");
	}

	return (0);
}
