#ifndef _MAIN_H_
#define _MAIN_H_

/*#include <unistd.h>*/

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


/**
 * print_alphabet_x10 - prints alphabetic charatecers.
 * Description: The program outputs alphabetic characters to
 * the standard output ten times.
 * Return: void
 */

void print_alphabet_x10(void);

/**
 * _islower - Determines if a character is lower case.
 * @c: argument.
 * Desciption: The program determines if a character is lowercase;
 * Return: 1 if c is lowercase , 0 otherwise
 */

int _islower(int c);

/**
 * _isalpha - Determines if a character is alphabetic.
 * @c: argument.
 * Desciption: The program determines if a character alphabetic;
 * Return: 1 if c is alphabetic , 0 otherwise
 */

int _isalpha(int c);

/**
 * print_sign - Determines the sign of a number.
 * @n: argument.
 * Desciption: The program determines the sign of a number;
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n);

#endif /* _MAIN_H_ */
