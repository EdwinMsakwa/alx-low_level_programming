#include "main.h"

/**
  * _pow_recursion - Returns the value of anumber x raised to
  * the power of a number y
  * @x: value
  * @y: value
  * Return: the value multiplied y times
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

