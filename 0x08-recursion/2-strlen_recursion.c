#include "main.h"

/**
  * _strlen_recursion - Derive the length of a string
  * @s: the string input to count the length of
  *
  * Return: integer.
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s = s + 1;

	return (_strlen_recursion(s) + 1);
}

