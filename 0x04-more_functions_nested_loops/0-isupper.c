#include "main.h"
#include <stdio.h>

/**
  * _isupper - Check if a letter is an uppercase letter
  * @x: The number to be checked
  *
  * Return: 1 for upper case letter or 0 for any else
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}

