#include <unistd.h>
#include "_putchar.c"

/**
 * print_alphabet - prints alphabetic charatecers.
 * Description: The program outputs alphabetic characters to
 * the standard output.
 * Return: void
 */

void print_alphabet(void)
{
	int letterAsciiCode;

	for (letterAsciiCode = 97 ; letterAsciiCode <= 122; letterAsciiCode++ )
	{
		_putchar(letterAsciiCode);
	}
	 _putchar('\n');

}
