#include "main.h"

/**
 * _islower - Determines if a character is lower case.
 * @c: argument.
 * Desciption: The program determines if a character is lowercase;
 * Return: 1 if c is lowercase , 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
