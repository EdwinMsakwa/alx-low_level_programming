#include "main.h"

/**
 * _abs - abosolute value of a number.
 * @n: value
 * Description: The program gets the absolute value of a number
 * Return: void
 */


int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}
}
