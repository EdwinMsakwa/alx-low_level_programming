#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Determines if a string is a palindrome
  * @s: the string value input
  * Return: integer
  */
int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}
	
	return (check_palindrome(s));
}

/**
  * check_palindrome - Checks if a string is a palindrome
  * @s: the string input
  * Return: integer 
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Determine the length of a string
  * @s: the string input parameter
  * Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	
	return (_strlen_recursion(s) + 1);
}

