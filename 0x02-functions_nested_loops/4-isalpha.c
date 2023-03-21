#include "main.h"

/**
 * _isalpha - Determines if a character is alphabetic.
 * @c: argument.
 * Desciption: The program determines if a character alphabetic;
 * Return: 1 if c is alphabetic , 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
