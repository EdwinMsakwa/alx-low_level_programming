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
		for (i = 0; i < 100; i++)
		{
			for (j = i; j < 100; j++)
			{
				int n1 = i / 10;
				int n2 = i % 10;
				int n3 = j / 10;
				int n4 = j % 10;

				putchar('0' + n1);
				putchar('0' + n2);
				putchar(' ');
				putchar('0' + n3);
				putchar('0' + n4);

				if (i < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	putchar('\n');

	return (0);
}
