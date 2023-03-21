#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - Main entry point to the program
 * Description: The program prints the string _putchar to the standard output.
 * Return: returns 0 upon success , otherwise 1.
 */


int main(void)
{
	print_alphabet();
	return (0);
}


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

