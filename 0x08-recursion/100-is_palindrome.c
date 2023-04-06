#include "main.h"


/**
 * is_palindrome_helper - Check if a substring is a palindrome.
 * @s: The input string.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	else if (s[start] != s[end])
	{
		return (0);
	}

	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
}

/**
 * is_palindrome - Determine if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (is_palindrome_helper(s, 0, len - 1));
}
