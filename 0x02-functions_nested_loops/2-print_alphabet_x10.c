
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabetic charatecers.
 * Description: The program outputs alphabetic characters to
 * the standard output ten times.
 * Return: void
 */


void print_alphabet_x10()
{
	int count = 0;

	while (count < 10)
	{
		int letterAsciiCode = 97;

		for (; letterAsciiCode <= 122; letterAsciiCode++)
		{
			_putchar(letterAsciiCode);
		}
		count++;
		 _putchar('\n');
	}
}
