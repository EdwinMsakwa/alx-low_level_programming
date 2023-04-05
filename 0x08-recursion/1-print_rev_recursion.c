#include "main.h"

/**
  * _print_rev_recursion - Print a string in reverse
  * @s: the parameter of the t string to print in reverse
  *
  * Return: void.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s = s + 1;
	
	_print_rev_recursion(s);
	
	s = s -1;
	
	_putchar(*s);
}

