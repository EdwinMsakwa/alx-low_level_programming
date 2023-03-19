#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - main entry point to the program.
 * Description: Evaluates if a random number is negative , positive or zero.
 * Return: returns 0 if execution is successful, 1 otherwise.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}

