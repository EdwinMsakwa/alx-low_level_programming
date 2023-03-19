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
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}

