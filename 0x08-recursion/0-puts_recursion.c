#include "main.h"

/**
  * _puts_recursion - Print a provided string then a new line
  * @s: the string parameter to print
  * Return: void.
  */
  
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	
	s++;
	
	_puts_recursion(s);
}

