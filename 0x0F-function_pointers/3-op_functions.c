#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - operation add
  * @a: first value
  * @b: second value
  * Return: integer result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - operation subtract
  * @a: first value
  * @b: second value
  * Return: integer result
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - operation multiply
  * @a: first value
  * @b: second value
  * Return: integer result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - operation division
  * @a: first value
  * @b: second value
  * Return: integer result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - operation modulus
  * @a: first value
  * @b: second value
  * Return: integer result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
