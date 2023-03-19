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

	int i, j, k;
		for (i = 0; i < 8; i++)
		{
			for (j = i + 1; j < 9; j++)
			{
				for (k = j + 1; k <= 9; k++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}

	putchar('\n');

	return (0);
}
