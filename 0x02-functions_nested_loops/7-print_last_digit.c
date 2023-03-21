#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: value
 * Description: returns the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	return (lastDigit);
}
