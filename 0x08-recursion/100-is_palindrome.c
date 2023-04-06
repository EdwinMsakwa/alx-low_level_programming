#include "main.h"


/**
  * is_palindrome - Determines if a string is a palindrome
  * @s: string input parameter
  * Return: 1 if the string is a palindrome , 0 otherwise
  */


int is_palindrome(char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;
	}

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}

	return (1);
}

