#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include "print_alphabet.c"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - prints alphabetic charatecers.
 * Description: The program outputs alphabetic characters to
 * the standard output.
 * Return: void
 */

void print_alphabet(void);


#endif /* _MAIN_H_ */
