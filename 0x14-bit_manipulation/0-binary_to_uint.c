#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: binary string argument
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0;
	unsigned int count_var = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] == 49)
			sum += 1 << count_var;

		count_var++;
	}

	return (sum);
}

/**
  * _strlen - returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
		a++;

	return (a);
}
